#include <bits/stdc++.h>
using namespace std;

vector< int > g[10004];
int d[10004];
int flag[10004];

void dfs(int u)
{
    int i,v;
    for(i=0;i<g[u].size();i++)
    {
        v=g[u][i];
        if(flag[v]==0)
        {
           flag[v]=1;
           dfs(v);
           d[u]+=(1+d[v]);
        }
    }
    d[u]+=1;
}


int main()
{
    int n,i,j,u,v,t,sum;

    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0; i < n; i++) {
			g[i].clear();
			d[i] = 0;
			flag[i] = 0;
		}
		sum=0;
        for(i=1;i<n;i++)
        {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        flag[0]=1;
        dfs(0);
        for(i=0;i<n;i++){sum+=d[i];}
        cout << sum << endl;
    }
    return 0;
}
