#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--)
    {
        ll n,m;
        cin >> n >> m;
        ll minm=min(n,m);
        ll maxm=max(n,m);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(i==j)
               cout<<3<<" ";
               else if(i+j<=minm-1)
               cout<<2<<" ";
               else
               {
                 if(n>m)
                 {
                    if(j==0)
                    cout<<3<<" ";
                    else
                    cout<<2<<" ";                 }
                 else
                 {
                    if(i==0)
                    cout<<3<<" ";
                    else
                    cout<<2<<" ";
                 }
              
               }
            }
            cout << "\n";
        }
    }
}