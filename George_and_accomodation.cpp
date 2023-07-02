// https://codeforces.com/problemset/problem/701/C 
#include <bits/stdc++.h>
using namespace std;
unordered_set<char>st;
unordered_map<char, int>mp;
int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int l=0;
    int r=0;
    for(char c:str){
        st.insert(c);
    }
    int ans=n;
    while(l<n){
        if(mp.size()==st.size()){
            ans=min(ans,r-l);
            mp[str[l]]--;
            if(mp[str[l]]==0){
                mp.erase(str[l]);
            }
            l++;
            continue;
        }
        if(r!=n){
            mp[str[r]]++;
            r++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
}
