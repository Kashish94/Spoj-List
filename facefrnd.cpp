#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    vector<int> v;
    int n,i;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int m;
        cin >> m;
        while(m--)
        {
            cin >> x;
            s.insert(x);
        }
    }
    for(i=0;i<v.size();i++)
    s.erase(v[i]);
    cout << s.size();
    return 0;
}