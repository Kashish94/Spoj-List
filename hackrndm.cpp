#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,k;
    cin >> n >> k;
    int arr[n],c=0,i;
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<=n;++i)
    {
        int flag=0,mid;
        int lb=0,ub=n-1;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(arr[mid]==arr[i]+k)
            {
                flag=1;
                break;
            }
            else if(arr[mid] > arr[i]+k)
            ub=mid-1;
            else
            lb=mid+1;
        }
        if(flag == 1)
        c++;
    }
    cout << c << endl;
    return 0;
}