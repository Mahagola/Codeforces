#include <bits/stdc++.h>
using namespace std;

void func()
{
    int arr[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (arr[i][j] == 1)
            {
                cout << (abs(3 - i) + abs(3 - j)) << endl;
                break;
            }
        }
    }
}
int main()
{
    func();
    return 0;
}