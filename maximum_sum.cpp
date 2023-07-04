// https://codeforces.com/problemset/problem/1832/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll max_sum(vector<ll> &v, ll k, ll n) {
    ll sum=0;
    ll maxi=0;
    vector<ll>pre(n+1);
    for(ll i=0;i<n;i++){
        sum+=v[i];
        pre[i+1]=pre[i]+v[i];
    }
    for(ll i=0;i<=k;i++){
        maxi=max(maxi,(pre[n-i]-pre[2*(k-i)]));
    }
    return maxi;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << max_sum(v, k, n) << endl;
    }
}
