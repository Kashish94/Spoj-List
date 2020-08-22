#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n,r,r1,r2,i,c=1;
    cin >> t;
    while(t--)
    {
        int ar[2000]={0},br[2000]={0},u=0;
        cin >> n >> r;
        while(r--)
        {
            cin >> r1 >> r2;
            ar[r1]++;
            br[r2]++;
        }
        for(i=0;i<n;i++)
        {
            if(ar[i] > 0 && br[i] > 0)
            {
                u=1;
                break;
            }
        }
        if(u == 1)
        {
            cout << "Scenario #" <<c<<" : " << "spied" << endl;
            c++;
        }
        else
        {
            cout << "Scenario #" <<c<<" : " << "spying" << endl;
            c++;
        }
    }
    return 0;
}