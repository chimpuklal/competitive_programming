#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define mod 1000000007

ll power(ll a, ll b) {
    ll res = 1;

    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }

    return res;
}
int d(int y)
{
    int ans=0;
    while(y>0)
    {
        ans+=y%10;
        y=y/10;
    }
    return ans;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        int zeros=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            zeros++;
            else
            mp[v[i]]++;
        }
  ll mx = 0;
int element = -1;
for(auto &p : mp){
   

    if(p.second > mx){
        mx = p.second;
        element = p.first;
    }
}
int ans=0;
if(mp.size()==0)
cout<<zeros*(zeros-1)/2<<endl;
else{
mp[element]+=zeros;
for(auto &p : mp)
{
    ll k = p.second;
    ans += k*(k-1)/2;
}
cout<<ans<<endl;
    }
}
}