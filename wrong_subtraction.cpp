#include <iostream>
#define ll long long
using namespace std;
void func()
{
    ll n;
    int k;
    cin >> n >> k;
    while (k--)
    {
        if ((n % 10) != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }
    cout << n << endl;
}
int main()
{
    func();
}