#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count_E = 0;
        int count_O = 0;
        int c_ind[3] = {-1, -1, -1};
        int o_ind[3] = {-1, -1, -1};
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
            {
                if(count_E < 3)
                    c_ind[count_E]=j+1;
                count_E++;
            }
            else
            {
                if(count_O < 3)
                    o_ind[count_O]=j+1;
                count_O++;
            }
        }
        if (count_O >= 3)
        {
            cout << "YES" << endl;
            cout << o_ind[0] << " " << o_ind[1] << " " << o_ind[2] << endl;
        }
        else if (count_E >= 2 && count_O >= 1)
        {
            cout << "YES" << endl;
            cout << c_ind[0] << " " << c_ind[1] << " " << o_ind[0] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}