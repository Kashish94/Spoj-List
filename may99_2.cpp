#include <bits/stdc++.h>
using namespace std;

typedef long long int LLD;
string letters = "manku";
string manku(LLD n)
{
    if (n == -1)
        return "";
    else
        return manku(n / 5 - 1) + letters[n % 5];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LLD n;
        cin >> n;
        cout << manku(n - 1) << endl;
    }
}
