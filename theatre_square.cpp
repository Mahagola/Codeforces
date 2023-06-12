#include<bits/stdc++.h>
using namespace std;
#define ll long long
void func()
{
    ll m,n,a;
    cin>>m>>n>>a;
    ll res=0;
    res=(ceil(1.0*m/a)*ceil(1.0*n/a));
    cout<<res<<endl;
}
int main()
{
    func();
    return 0;
}