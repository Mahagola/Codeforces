// https://codeforces.com/problemset/problem/402/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int sec,t_nuts,div,cap;
    cin>>sec>>t_nuts>>div>>cap; //max sections, total nuts, divisors, capacity of box
    int count=0;
    while(div>=0&&t_nuts>0){
        int mini=min(sec,div+1);
        t_nuts-=mini*cap;
        div-=mini-1;
        count++;
    }
    cout<<count;
    return 0;
}
