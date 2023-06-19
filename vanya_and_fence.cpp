#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int temp = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
        {
            temp += 1;
        }
        else
        {
            temp += 2;
        }
    }
    cout<<temp<<endl;
}