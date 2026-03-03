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
    long long n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    double median=0;
    if(n%2!=0)
    median=v[n/2];
    else
    {
        median=(v[n/2]+v[n/2-1])/2;
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(median-v[i]);
    }
    cout<<ans<<endl;
}