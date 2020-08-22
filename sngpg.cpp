#include <bits/stdc++.h>
using namespace std;

int Isprime(int a, int b)
{
    int count = 0;
    if (a <= 0 && b >= 0)
        count++;
    if (a <= 1 && b >= 1)
        count++;
    if (a <= 2 && b >= 2)
        count++;
    if (a <= 3 && b >= 3)
        count++;
    return count;
}
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << Isprime(a, b) << endl;
    }
    return 0;
}
