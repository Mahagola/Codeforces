#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int i1 = 0, i2 = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                i2++;
            }
            else if (s[i] == 'D')
            {
                i2--;
            }
            else if (s[i] == 'R')
            {
                i1++;
            }
            else if (s[i] == 'L')
            {
                i1--;
            }
            if (i1 == 1 && i2 == 1)
                flag = true;
        }
    cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}
