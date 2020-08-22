#include <bits/stdc++.h>
using namespace std;

typedef long long int LLD;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LLD n, num;
        cin >> n;
        num = n;
        while (true)
        {
            LLD s = 0;
            while (n != 0)
            {
                s += n % 10;
                n = n / 10;
            }
            if (num % s == 0)
            {
                cout << num << endl;
                break;
            }
            else
                num++;
            n = num;
        }
    }
    return 0;
}