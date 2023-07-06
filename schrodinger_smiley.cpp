// https://www.codechef.com/problems/SMILEY
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]==':'){
                int rp=0;
                while(i+1<n&&s[i+1]==')'){
                    rp++;
                    i++;
                }
                if(i+1<n&&s[i+1]==':'&&rp>0){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
