#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin>>n;
    ll arr[n];
    ll arr2[n];
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        arr[i]=x;
        arr2[i]=x;
    }
    sort(arr2,arr2+n);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
        arr2[i]+=arr2[i-1];
    }
    ll m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int typ,l,r;
        cin>>typ>>l>>r;
        l--;
        r--;
        if(typ==1){
            if(l==0){
                cout<<arr[r]<<endl;
            }
            else{
                cout<<arr[r]-arr[l-1]<<endl;
            }
        }
        else{ // type 2, which is for sorted array arr2
            if(l==0){
                cout<<arr2[r]<<endl;
            }
            else{
                cout<<arr2[r]-arr2[l-1]<<endl;
            }
        }
    }
    return 0;
}
