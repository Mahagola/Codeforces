#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p = n / 5;
    if (n > 5 && n % 5 != 0)
    {
        cout << (p + 1);
    }
    else if (n % 5 == 0)
    {
        cout << p;
    }
    else
        cout << 1;
    return 0;
}