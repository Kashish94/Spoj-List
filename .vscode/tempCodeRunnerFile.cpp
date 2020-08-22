#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long sum,ans;
    int i,x,n;
    while(n != 0)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        sum=ans=0;
        for(i=0;i<n;i++)
        {
            cin >> x;
            sum += x;
            ans += (long long)abs((double)sum);
        }
        cout << ans << endl;
    }
    return 0;
}