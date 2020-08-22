#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        double wh = n;
        double ans = wh / (wh + 1);
        printf("%0.8f\n", ans);
    }
    return 0;
}