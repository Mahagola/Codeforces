// https://codeforces.com/problemset/problem/1841/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll first = -1, last = -1;
        ll num;
        bool flag = true;
        cin >> n;
        while (n--)
        {
            cin >> num;
            if (flag)
            {
                if (first == -1||first==num)
                {
                    first = num;
                    last = num;
                    cout << 1;
                }
                else if (num > first||num==last)
                {
                    last = num;
                    cout << 1;
                }
                else
                {
                    last=num;
                    cout << 1;
                    flag = false;
                }
            }
            else
            {
                if (num >= last && num <= first)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
}
