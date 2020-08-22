#include<bits/stdc++.h>
using namespace std;

typedef long long int LLD;

int main()
{
    int test;
    LLD n,k,t,f;
    cin >> test;
    while(test--)
    {
        cin >> n >> k >> t >> f;
        cout << (n+(f-n)*k/(k-1)) << endl;
    }
}