#include <bits/stdc++.h>
using namespace std;

typedef long long int LLD;

long long int gcd(LLD a, LLD b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LLD a, b, c;
        cin >> a >> b;
        if (a == b)
            cout << " 1 1" << endl;
        else
        {
            LLD lcm = (a * b) / gcd(a, b);
            cout << lcm / a << " " << lcm / b << endl;
        }
    }
    return 0;
}