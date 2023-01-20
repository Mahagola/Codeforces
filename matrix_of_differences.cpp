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
        int mini = 1, maxi = n * n;
        int maxa=maxi;
        int count = 1;
        long long ans[n+1][n+1];

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (count % 2 == 1)
                    {
                        ans[i][j] = mini;
                        mini++;
                    }
                    else
                    {
                        ans[i][j] = maxa;
                        maxa--;
                    }
                    count++;
                }
            }
            else
            {
                for (int j = n; j >= 1; j--)
                {
                    if (count % 2 == 1)
                    {
                        ans[i][j] = mini;
                        mini++;
                    }
                    else
                    {
                        ans[i][j] = maxa;
                        maxa--;
                    }
                    count++;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<ans[i][j]<<" ";
                cout<<endl;
            }
        }
    }
}