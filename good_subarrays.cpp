#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin>>n>>s;
        vector<ll>v(n+1,0);
        for(int i=1;i<=n;++i){
            v[i]=s[i-1]-'0'-1;
        }
        for(int i=1;i<=n;++i){
            v[i]+=v[i-1];
        }
        map<ll,ll>m;
        ll ans=0;
        for(int i=0;i<=n;++i){
            m[v[i]]++;
        }
        for(auto j:m){
            ans+=j.second*(j.second-1)/2;
        }
        cout<<ans<<endl;
    }
}
