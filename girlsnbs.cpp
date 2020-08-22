#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g,b,x=1,y=1;
    while(x != -1 && y != -1)
    {
        cin >> g >>b;
        x = g;
        y = b;
        if(x != -1 && y != -1)
        {
            if( g == b)
            {
                if(g == 0)
                cout << "0" << endl;
                else
                cout << "1" << endl;
            }
            else
            {
                if(g > b)
                {
                    x = g;
                    y = b;
                }
                else
                {
                    x = b;
                    y = g;
                }
                if((x%(y+1)) == 0)
                cout << (x/(y+1)) << endl;
                else
                cout << (x/(y+1))+1 << endl;
                }
            }
        }
        return 0;
}