#include <iostream>
#include <vector>

using namespace std;

void func()
{
    string s;
    cin >> s;
    int n=s.length();
    if(n<=10){
        cout<<s<<endl;
    }
    else{
        cout<<s[0]<<n-2<<s[n-1]<<endl;
    }
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
