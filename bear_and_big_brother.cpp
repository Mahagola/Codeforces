#include<iostream>
using namespace std;
#define ll long long
void func(){
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a<=b){
        count++;
        a*=3;
        b*=2;
    }
    cout<<count<<endl;
}
int main(){
    func();
}