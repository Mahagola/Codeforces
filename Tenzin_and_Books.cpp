// https://codeforces.com/problemset/problem/1842/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool knowldge(ll n, ll x, ll stk1[], ll stk2[], ll stk3[]) {
    ll temp=0;
    if (x == 0) return true;
    for (ll i = 0; i < n; i++) {
        if((stk1[i]&x)+(stk1[i]^x)==x){
            temp|=stk1[i];
        }
        else break;
    }
    for (ll i = 0; i < n; i++) {
        if((stk2[i]&x)+(stk2[i]^x)==x){
            temp|=stk2[i];
        }
        else break;
    }
    for (ll i = 0; i < n; i++) {
        if((stk3[i]&x)+(stk3[i]^x)==x){
            temp|=stk3[i];
        }
        else break;
    }
    return temp==x;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll stk1[n], stk2[n], stk3[n];
        for (ll i = 0; i < n; i++) {
            cin >> stk1[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> stk2[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> stk3[i];
        }
        cout <<(knowldge(n, x, stk1, stk2, stk3)?"Yes":"No")<< endl;
    }
}
