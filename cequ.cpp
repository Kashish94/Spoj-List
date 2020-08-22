#include <bits/stdc++.h>
using namespace std;

typedef long long int LLD;

long long int gcd(LLD a, LLD b)
{
    if ((b == 0) || (a == 0))
        return 0;
    if (b % a == 0)
        return a;
    else
        return gcd(b % a, a);
}

int main()
{
    LLD t, a, b, c;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cin >> a >> b >> c;
        LLD gc = gcd(a, b);
        if (c % gc == 0)
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
    }
    return 0;
}