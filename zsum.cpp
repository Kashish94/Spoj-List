#include <bits/stdc++.h>
using namespace std;

#define MOD 10000007

long long int modexpo(long long int x, long long int y)
{
    long long int res = 1;
    while(y > 0)
    {
        if(y%2)
        res = (res*x)%MOD;
        x = (x*x)%MOD;
        y = y >> 1;
    }
    return res;
}

int main()
{
    long long int n,k;
    while(1)
    {
        cin >> n >> k;
        if(n == 0 && k== 0)
        return 0;
        else
        {
            long long int s1,s2,s3,s4;
            s1 = (2*modexpo(n-1,n-1))%MOD;
            s2 = (2*modexpo(n-1,k))%MOD;
            s3 = modexpo(n,k);
            s4 = modexpo(n,n);
            long long int ans = (s1+s2+s3+s4)%MOD;
            cout << ans << endl;
        }
    }
}