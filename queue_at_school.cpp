#include <bits/stdc++.h>
using namespace std;
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = a;
    b = temp;
}
int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    for (int i = 0; i < t; i++)
    {
        for(int j=0;j<n;j++){
            if (str[j] == 'B' && str[j + 1] == 'G')
            {
                swap(str[j], str[j + 1]);
                j++;
            }
        }
    }
    cout << str << endl;
}