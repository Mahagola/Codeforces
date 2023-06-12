#include <iostream>
#include<vector>
using namespace std;

void func()
{
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long temp=0;
    int count=0;
    for(int i:v){
        if(i<=q){
            count++;
        }
        else{
            count=0;
        }
        if(count>=k){
            temp+=count-k+1;
        }
    }
    cout<<temp<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        func();
    }
    return 0;
}