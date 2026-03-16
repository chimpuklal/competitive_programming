#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define mod 1000000007


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        vector<ll>cost(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            cost[i]=v[i]+i+1;
            
        }
        sort(cost.begin(),cost.end());
        ll ans=0;ll f=0;
        for(int i=0;i<n;i++)
        {
             ans+=cost[i];
            if(ans<=c)
              f++;
            
        }
        cout<<f<<endl;
    }
}