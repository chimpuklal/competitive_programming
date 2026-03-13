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
    string s;
    cin>>s;
    int c=0;
    int maxm=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        c++;
        else
        {
            maxm=max(c+1,maxm);
            c=0;

        }
    }
    maxm=max(c+1,maxm);
    
    cout<<maxm<<endl;

}
