#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
LL t, n;
int i, c;
int main()
{
    cin >> t;
    while (t--)
    {
        c = 0;
        i = 1;
        cin >> n;
        while (n / pow(5, i) >= 1)
        {
            c = c + (int)(n / pow(5, i));
            i = i + 1;
        }
        cout << c << endl;
    }
    return 0;
}