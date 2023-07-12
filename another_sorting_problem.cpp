// https://codeforces.com/contest/1575/problem/A
#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<string> v;

bool compare(int a, int b) {
    for (int i = 0; i < m; i++) {
        if (v[a][i] != v[b][i]) {
            if (i % 2 == 0) {
                return v[a][i] < v[b][i];
            } else {
                return v[a][i] > v[b][i];
            }
        }
    }
    return true;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string title;
        cin >> title;
        v.push_back(title);
    }

    vector<int> indices(n);
    for (int i = 0; i < n; i++) {
        indices[i] = i;
    }

    sort(indices.begin(), indices.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << indices[i]+1 << " ";
    }
    cout << endl;

    return 0;
}
