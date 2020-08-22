#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, a, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> a;
        n = a - x;
        int sum = n * (a + 1);
        sum = sum - (n * (n - 1) / 2);
        cout << sum << endl;
    }
    return 0;
}