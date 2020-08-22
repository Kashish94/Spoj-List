#include <bits/stdc++.h>
using namespace std;

int t, n, A[100007], c;

int main()
{
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> A[i];
        if (A[0] != 0)
            c = 1;
        for (int i = 0; i < n; i++)
        {
            if (A[i] > i)
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}