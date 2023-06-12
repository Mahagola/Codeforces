#include <bits/stdc++.h>
using namespace std;
void func()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] <= i)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}
int main()
{
    func();
    return 0;
}