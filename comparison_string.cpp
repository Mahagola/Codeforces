#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(n + 1);
        for (int i = 0; i < n; i++) {
            if (s[i] == '<') {
                a[i + 1] = max(a[i + 1], a[i] + 1);
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '>') {
                a[i] = max(a[i], a[i + 1] + 1);
            }
        }
        set<int> unique_elements(a.begin(), a.end());
        cout << unique_elements.size() << endl;
    }
}
