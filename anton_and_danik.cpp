#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
void func()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    if (mp['A'] > mp['D'])
    {
        cout << "Anton" << endl;
    }
    else if (mp['D'] > mp['A'])
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}
int main()
{
    func();
}