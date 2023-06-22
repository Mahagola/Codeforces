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
        ll n;
        cin >> n;
        ll sum = 0;
        ll count = 0;
        ll k = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            sum += abs(a);
            if (a <= 0)
            {
                if (a < 0)
                {
                    k = 1;
                }
            }
            else
            {
                if (k == 1)
                {
                    count++;
                }
                k=0;
            }
        }
        if(k==1){
            count++;
        }
        cout << sum << " " << count << endl;
    }
    return 0;
}