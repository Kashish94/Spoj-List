#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    int a[10000];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            for (;;)
            {
                if (a[i] != 0 && a[i + 1] != 0)
                {
                    a[i]--;
                    a[i + 1]--;
                }
                else if (a[i] == 0 || a[i + 1] == 0)
                {
                    break;
                }
            }
        }
        int flag = 1;
        for (i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}