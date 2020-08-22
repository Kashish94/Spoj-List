#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, A[100000];
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            s = s + A[i];
        }
        if (s % n == 0)
            cout << n << endl;
        else
            cout << n - 1 << endl;
    }
    return 0;
}