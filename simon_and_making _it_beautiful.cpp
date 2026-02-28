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
   
     ll t;cin>>t;
     while(t--)
     {
       int n;
       cin>>n;
       vector<long long>v(n);
       for(int i=0;i<n;i++)
{
    cin>>v[i];
}
int c=0;
int maxn=v[0];
   for(int i=1;i<n;i++)
{
 if(v[i]>maxn)
 {
 maxn=v[i];
 c=i;
    
}
}


swap(v[0],v[c]);
   for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
       }
