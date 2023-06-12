#include <iostream>
using namespace std;

void func()
{
    int n;
    cin >> n;
    string s;
    string ans = "";
    cin >> s;
    char rand = s[0];
    ans += s[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == rand)
        {
            i++;
            rand = s[i];
            ans += rand;
        }
    }
    cout << ans << endl;
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