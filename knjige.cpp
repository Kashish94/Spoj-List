#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    int j = n, swaps = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] == j)
        j--;
        else
        swaps++;
    }
    cout << swaps << endl;
}