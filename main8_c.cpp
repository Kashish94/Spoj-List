#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
inline ll power(int base,int n);

int t;
ll n,k;
ll a[1000000];

int distributed(int m)
{
    int p = 0;
    if(m == 0)
    return INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i]) p += a[i]/m;
    }
    return p; //number of persons getting chocolate
}
int main()
{
    int choco = -1,low=0,high,ans=0,mid,p;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i=0;i<n;i++)
        {
        cin >> a[i];
        if(a[i] > choco)
        choco = a[i];
        }
        high = choco;
        while(low <= high)
        {
            mid = (low+high)/2;
            p = distributed(mid);
            if(p < k)
            {
                high = mid-1;
            }
            else if(p >= k)
            {
                low=mid+1;
                if(mid > ans)
                ans = mid;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

inline ll power(int base,int n){
    ll ans=1;
    while(n){
        if(n&1==1) ans*=base;
        base*=base;
        n=(n>>1);
    }
    return ans;
}