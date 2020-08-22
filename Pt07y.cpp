#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, ko, i, j;

vector<int> v[10001];

int dfs()
{
    stack<int> s;
    bool visited[10001];
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    s.push(1);
    ko = 0;

    while (s.size() > 0)
    {
        ko++;
        j = s.top();
        s.pop();
        if (visited[j] == true)
        {
            return 0;
        }
        visited[j] = true;
        for (i = 0; i < v[j].size(); i++)
        {
            s.push(v[j][i]);
        }
    }
    if (ko == n)
        return 1;
    else
        return 0;
}

int main()
{
    cin >> n >> m;
    for(i=1;i<=m;i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
    }
    b = dfs();
    if (b == 1 && (m + 1 == n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}