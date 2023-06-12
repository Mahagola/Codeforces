#include <iostream>
using namespace std;

void func()
{
    int n, k;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= target && arr[i]>0)
        {
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    func();
    return 0;
}