#include <iostream>
using namespace std;
void func()
{
    string s;
    cin >> s;
    string ans = "";
    int u_c = 0;
    int l_c = 0;
    for (char c : s)
    {
        if (c < 97)
        {
            u_c++;
        }
        else
        {
            l_c++;
        }
    }
    if (u_c > l_c)
    {
        for (char c : s)
        {
            ans += toupper(c);
        }
        cout << ans << endl;
    }
    else
    {
        for (char c : s)
        {
            ans += tolower(c);
        }
        cout << ans << endl;
    }
}
int main()
{
    func();
}