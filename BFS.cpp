#include<bits/stdc++.h>
using namespace std;
int nodecount, edgecount;
bool vis[1005];
void bfs(int src,vector<int>g[10000])
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty())
    {
        int u = q.front();
        cout << u << endl;
        q.pop();
        for(auto v:g[u])
        {
            if(!vis[v])
            {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}
int main()
{
    cin >> nodecount >> edgecount;
    memset(vis,false,sizeof(vis));
    vector<int>g[10005];
    for(int i=1; i<=edgecount; i++)
    {
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    bfs(2,g);
}
