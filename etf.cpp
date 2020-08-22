#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int result = n;
        for(int p = 2; p*p <= n; ++p)
        {
            if(n % p == 0)
            {
                while(n % p == 0)
                n /= p;
                result -= result/p;
            }
        }
        if(n> 1)
        result -= result / n;
        cout << result << endl;
    }
}