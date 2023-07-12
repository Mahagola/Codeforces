// https://codeforces.com/contest/1583/problem/A
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        int odd = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] & 1)
            {
                odd = i;
            }
        }
        if (isPrime(sum))
        {
            cout << n - 1 << endl;
            for (int i = 0; i < n; i++)
            {
                if (i == odd)
                {
                    continue;
                }
                cout << i + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
