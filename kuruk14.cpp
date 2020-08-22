#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, i, flag = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[1001] = {0};
        for (i = 1; i <= n; i++)
        {
            cin >> x;
            if (a[x + 1] == 0)
            {
                a[x + 1] = 1;
                flag++;
            }
            else if (a[n - x] == 0)
            {
                a[n - x] = 1;
                flag++;
            }
        }
        if (flag == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}