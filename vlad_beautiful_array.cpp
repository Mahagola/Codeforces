#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag_E = false;
        bool flag_O = false;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int k = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (k % 2 == 0)
            {
                if ((arr[i] - k) % 2 == 0)
                {
                    flag_E = true;
                }
                else
                {
                    flag_E = false;
                }
            }
            if (k % 2 != 0)
            {
                if ((arr[i] - k) % 2 != 0)
                {
                    flag_O = true;
                }
                else
                {
                    flag_O = false;
                }
            }
        }
        if (flag_E || flag_O)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
