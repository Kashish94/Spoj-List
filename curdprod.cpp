#include <bits/stdc++.h>
#define SIZE 10000

typedef long long int LLD;

using namespace std;

LLD arr[SIZE];

LLD findQuality(LLD x, LLD n)
{
    LLD result = 0;
    for(int i=0;i<n;i++)
    result += (x/arr[i]);
    return result;
}

LLD binarySearch(LLD low, LLD high, LLD n, LLD target)
{
    while(low < high)
    {
        LLD mid = (low+high)/2;
        LLD quality = findQuality(mid,n);
        if(quality >= target)
        high = mid;
        else if(quality < target)
        low = mid+1;
    }
    return high;
}

int main()
{
    LLD t,n,target,low=1,high;
    cin >> t;
    while(t--)
    {
        cin >> n >> target;
        high = 0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            high = max(high,arr[i]*target);
        }
        cout << binarySearch(low,high,n,target) << endl;
    }
    return 0;
}