#include<iostream>
using namespace std;
int findMex(int arr[], int n){
    int mex=0;
    for(int i=0;i<n;i++){
        if(arr[i]==mex){
            mex++;
        }
    }
    return mex;
}
void new_mex(int arr[], int n){
    int mex=findMex(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[i]=mex;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mex_1=findMex(arr, n);
        new_mex(arr,n);
        int mex_2=findMex(arr, n);
        cout<<(mex_2==mex_1+1?"YES":"NO")<<endl;
    }
}