#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int count=0;
    for(int i=1;i<=w;i++){
        count+=i*k;
    }
    if(count<n){
        cout<<0<<endl;
    }
    else{
        cout<<count-n<<endl;
    }
    return 0;
}