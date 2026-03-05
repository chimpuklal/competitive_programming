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
      vector<long long>v(n);
      for(int i=0;i<n;i++)
      {
        cin>>v[i];
      }
      ll c=0;
      ll sum=0;
      ll min=abs(v[0]);
      for(int i=0;i<n;i++)
      {
        if(abs(v[i])<min)
        min=abs(v[i]);
      }
      for(int i=0;i<n;i++)
      {
        if(v[i]<0)
        c++;
        
        sum+=abs(v[i]);
        
      }
      if(c%2==0)
      cout<<sum<<endl;
      else
      cout<<sum-2*min<<endl;

}}