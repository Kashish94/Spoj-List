#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, *a, s, i;
    cin >> t;
    cout << endl;
    while (t--)
    {
        cin >> n;
        a = new (nothrow) long long[n];
        s = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            s = (s + a[i]) % n;
        }
        if (s % n == 0)
            cout << "YES" << endl
                 << endl;
        else
            cout << "NO" << endl
                 << endl;
    }
    return 0;
}