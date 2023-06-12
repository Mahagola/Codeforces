#include<bits/stdc++.h>
using namespace std;
int main() {
    string name;
    while (cin >> name) {
        unordered_set<char> mp;
        for (char c : name) {
            mp.insert(c);
        }
        if (mp.size() % 2 == 0) {
            cout << "CHAT WITH HER!\n";
        } else {
            cout << "IGNORE HIM!\n";
        }
    }
    return 0;
}