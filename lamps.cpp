// https://codeforces.com/contest/1839/problem/B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n+1);
        for (int i = 1; i <= n; i++) {
            int a, b;
            cin >> a >> b;
            arr[a].push_back(b);
        }
        long long ans = 0;
        for (int i = n; i >= 1; i--) {
            sort(arr[i].rbegin(), arr[i].rend());
            for (int j = 0; j < min(i, (int)arr[i].size()); j++) {
                ans += arr[i][j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
