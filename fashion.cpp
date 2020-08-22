#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        sort(a, a + n);
        sort(b, b + n);
        int ans = 0;
        for (i = 0; i < n; i++)
        {
            ans += a[i] * b[i];
        }
        cout << ans << endl;
    }
    return 0;
}