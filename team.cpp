#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        count += (p + v + t >= 2 ? 1 : 0);
    }
    cout << count << endl;

    return 0;
}