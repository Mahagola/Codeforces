#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        int max_f = 0;
        for (char i : s)
        {
            mp[i]++;
            max_f = max(max_f, mp[i]);
        }
        if (max_f == 4)
        {
            cout << -1 << endl;
        }
        else if (max_f == 2 || max_f == 1)
        {
            cout << 4 << endl;
        }
        else
        {
            cout << 6 << endl;
        }
    }
    return 0;
}