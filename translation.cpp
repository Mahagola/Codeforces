#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (t == temp)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}