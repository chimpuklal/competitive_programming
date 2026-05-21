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
       ll n,k,b,s;
       cin>>n>>k>>b>>s;
       ll min_s=k*b;
       ll max_s=k*b+n*(k-1);

       if(s>max_s||s<min_s)
       cout<<-1;
    
       else
       {
        vector<ll>v(n,0);
        v[0]=min_s;
        s-=min_s;
        for(int i=0;i<n;i++)
        {
            ll add=min(k-1,s);
            v[i]+=add;
            s-=add;
        }
        for(ll i=0;i<n;i++)
       {
        cout<<v[i]<<" ";
        cout<<endl;
       }
       }
    }
}