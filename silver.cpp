#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res;
    double temp;
    cin >> n;
    while (n != 0)
    {
        temp = log(n) / log(2);
        res = int(temp);
        cout << res << endl;
        cin >> n;
    }
    return 0;
}