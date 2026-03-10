#include <bits/stdc++.h> 
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll ones = 0, zeros = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                zeros++;
            else
                ones++;
        }

        ll d = zeros, f = ones;
        ll c = 0;

        if(abs(zeros - ones) == n)
        {
            cout << ceil(n / 2.0) << endl;
        }
        else
        {
           if(zeros%2==0&&ones%2==0)
           {

           ll minm=min(ones,zeros);
             ll temp = minm;
            while(temp <= n)
            {
                c++;
                temp += 2;
            }

           }
           else if(zeros%2!=0&&ones%2!=0)
           {

           ll minm=min(ones,zeros);
             ll temp = minm;
            while(temp <= n)
            {
                c++;
                temp += 2;
            }

           }
           else
           {

            ll temp = zeros;
            while(temp <= n)
            {
                c++;
                temp += 2;
            }

            temp = ones;
            while(temp <= n)
            {
                c++;
                temp += 2;
            }

           }

            cout<<c<<endl;
        }
    }
}