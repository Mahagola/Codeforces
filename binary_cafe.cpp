#include <iostream>
#include <cmath>
using namespace std;

void func()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    if (log2(n) < k) {
        cout << n + 1 << endl;
    }
    else {
        cout << (int)pow(2, k) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        func();
    }
    return 0;
}