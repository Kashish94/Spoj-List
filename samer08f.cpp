#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, sum;
    while (cin >> n)
    {
        if (n == 0)
            break;
        sum = (n * (n + 1) * (2 * n + 1)) / 6;
        cout << sum << endl;
    }
    return 0;
}