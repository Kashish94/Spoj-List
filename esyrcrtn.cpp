#include <bits/stdc++.h>
using namespace std;

typedef long long int LLD;

int main()
{
    int t;
    int arr[] = {1, 4, 6, 5, 2, 0};
    cin >> t;
    while (t--)
    {
        LLD n;
        cin >> n;
        cout << arr[(n - 1) % 6] << endl;
    }
    return 0;
}