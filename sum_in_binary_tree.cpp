#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        while (n > 0)
        {
            sum = sum + n;
            n>>=1;
        }
        cout << sum << endl;
    }

    return 0;
}