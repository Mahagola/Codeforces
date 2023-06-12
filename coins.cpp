#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        cout<<((n-k)%2==0||n%2==0?"YES":"NO")<<endl;
    }
}