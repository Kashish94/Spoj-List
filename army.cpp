#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, ng, nm, i;
    cin >> t;
    cout << endl;
    while (t--)
    {
        cin >> ng >> nm;
        int sng[ng], snm[nm];
        for (i = 0; i < ng; i++)
        {
            cin >> sng[i];
        }
        for (i = 0; i < nm; i++)
        {
            cin >> snm[i];
        }
        sort(sng, sng + ng);
        sort(snm, snm + nm);
        if (sng[ng - 1] >= snm[nm - 1])
            cout << "Godzilla" << endl;
        else
        {
            cout << "MechaGodzilla" << endl;
        }
    }
    return 0;
}