#include <bits/stdc++.h>
#define MOD 1000007
using namespace std;

int main()
{
    long long int t, n, ans;
    cin >> t;
    while (t--)
    {
        long long int n, ans;
        cin >> n;
        ans = ((n * (3 * n + 1)) / 2);
        ans %= MOD;
        cout << ans << endl;
    }
}