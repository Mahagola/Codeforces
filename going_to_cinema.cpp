#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    int result;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        ll arr[n];
        bool arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (i >= arr[i])
            {
                arr2[i] = true;
            }
            else
            {
                arr2[i] = false;
            }
        }
        result = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] == true)
            {
                if (i == 0)
                {
                    result++;
                }
                else if (arr2[i - 1] == false)
                {
                    result++;
                }
            }
        }
        if (arr[0] > 0)
        {
            result++;
        }
        cout << result << endl;
    }
}