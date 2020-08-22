#include<bits/stdc++.h>
using namespace std;

typedef long long int LLD;

int main()
{
    int t;
    LLD n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        while( n % 2 == 0)
        n /= 2;
        cout << "Case " << i + 1 << ": " << n << endl;
    }
    return 0;
}
