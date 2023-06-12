#include <bits/stdc++.h>
using namespace std;
void func()
{
    string s;
    cin >> s;

    string temp_i;
    for (char c : s)
    {
        if (c != '+')
        {
            temp_i.push_back(c);
        }
    }

    sort(temp_i.begin(), temp_i.end());

    string ans;
    int i = 0;
    for (char c : s)
    {
        if (c == '+')
        {
            ans.push_back(c);
        }
        else
        {
            ans.push_back(temp_i[i++]);
        }
    }

    cout<< ans << endl;
}

int main()
{
    func();
    return 0;
}
