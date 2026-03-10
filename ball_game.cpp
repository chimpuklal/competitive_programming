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
        ll n;
        cin>>n;
        vector<ll>d(n);
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
            vector<pair<ll,ll>> vp;
            for(int i=0;i<n;i++)
            {
                vp.push_back({d[i],v[i]});
            }
            sort(vp.begin(),vp.end());
     vector<long double> t(n);

for(int i=0;i<n;i++)
{
    t[i] = (long double)vp[i].first / vp[i].second;
}
        ll f=n;
        long double check=t[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(check>=t[i])
            check=t[i];
            else
            f--;
        }
        cout<<f<<endl;
    }

}