#include<iostream>
using namespace std;
#define ll long long
bool even(ll x){
    return !(x&1);
}
void func(){
    ll n,l,r,k,q;
    cin>>n>>q;
    ll int arr[n+1];
    arr[0]=0;
    ll sum[n+1];
    sum[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum[i]=arr[i]+sum[i-1];

    }
    ll total =sum[n];
    while(q--){
        cin>>l>>r>>k;
        if(even( total -(sum[r]-sum[l-1])+ k*(r-l+1))){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        func();
    }
}