#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum_E = 0;
        int sum_O = 0;
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
            {
                sum_E += arr[j];
            }
            else
            {
                sum_O += arr[j];
            }
        }
        if (sum_E > sum_O)
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