#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void bin(int n)
{
    int k;
    if (n % 2 == 0)
    {
        int j = 0;
        int ans = 0;
        vector<int> v;

        while (n)
        {
            v.push_back(n % 2);
            n = n / 2;
        }

        for (int i = v.size() - 1; i >= 0; i--)
        {
            ans += v[i] * (int)pow(2, j);
            j++;
        }

        cout << ans << endl;
    }
    else
    {
        cout << n << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bin(n);
    }
}