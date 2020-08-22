#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n != 0)
    {
        int l[n];
        int low,high,ans=0;
        for(int i=0;i<n;i++)
        cin >> l[i];
        sort(l,l+n);
        for(int i=n-1;i>=2;i--)
        {
            low=0,high=i-1;
            while(low < high)
            {
                if(l[low]+l[high] < l[i])
                {
                    ans += high-low;
                    low = low+1;
                }
                else
                high = high-1;
            }
        }
            cout << ans << endl;
            cin >> n;
    }
    return 0;
}