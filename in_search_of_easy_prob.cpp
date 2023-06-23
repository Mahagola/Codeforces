#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int hard=0;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]==1){
            hard=1;
            break;
        }
        else{
            hard=0;
        }
    }
    if(hard){
        cout<<"Hard"<<endl;
    }
    else{
        cout<<"Easy"<<endl;
    }
}
