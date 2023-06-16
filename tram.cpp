#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{   
    int n,a,b,p=0,maxi=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p = b - a + p;
        if (p > maxi)
        {
            maxi = p;
        }
    }
    cout<<maxi<<endl;
}