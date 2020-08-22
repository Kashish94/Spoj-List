#include <bits/stdc++.h>
using namespace std;

typedef long long int LLD;

int main()
{
    LLD t, n, a, b, c = 1, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n < 3)
        {
            a = 0;
        }
        else
        {
            b = sqrt(n);
            while (1)
            {
                if (b * (b + 2) <= n)
                {
                    a = b;
                    break;
                }
                else
                {
                    b--;
                }
            }
        }
        cout << "Case"
             << " " << c << ":"
             << " " << a;
        c++;
    }
    return 0;
}