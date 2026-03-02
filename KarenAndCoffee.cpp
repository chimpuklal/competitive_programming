#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll n,k,q;
   cin>>n>>k>>q;

   const int MAX = 200005;

   vector<ll> v(MAX,0);

   for(int i=0;i<n;i++)
   {
        int a,b;
        cin>>a>>b;
        v[a]++;
        v[b+1]--;
   }

   for(int i=1;i<MAX;i++)
   {
        v[i]+=v[i-1];
   }

   vector<ll> pref(MAX,0);
   for(int i=1;i<MAX;i++)
   {
        pref[i] = pref[i-1] + (v[i] >= k);
   }

   while(q--)
   {
        int a,b;
        cin>>a>>b;
        cout << pref[b] - pref[a-1] << endl;
   }
}