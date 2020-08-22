#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double s,m,a,b,c,d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        s = (a+b+c+d)/2.0;
        m = sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n", m);
    }
}