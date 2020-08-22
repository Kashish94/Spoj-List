#include <bits/stdc++.h>
using namespace std;

typedef long long int LLD;

long long int gcd(LLD x, LLD y)
{
    if (y > x)
    {
        LLD temp = x;
        x = y;
        y = temp;
    }
    while (y != 0)
    {
        LLD z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LLD x, y, z;
        cin >> x >> y >> z;
        if ((z > x && z > y) || (z % gcd(x, y) != 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}