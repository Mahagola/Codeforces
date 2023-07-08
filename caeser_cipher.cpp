// https://www.codechef.com/START97D/problems/CAESAR
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--){
    int n;
    cin>>n;
    string s1,s2,s3;
    string ans="";
    cin>>s1>>s2>>s3;
    int q[n];
    for(int i=0;i<n;i++){
       q[i]=(s2[i]-s1[i]+26)%26;
    }
    for(int i=0;i<n;i++){
        ans.push_back((s3[i]-'a'+q[i])%26+'a');

    }
    cout<<ans<<endl;
}
return 0;
}
