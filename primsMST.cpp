#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int nodecount, edgecount;
bool vis[1005];
int prims(int source,vector<vector<int>>g[10000])
{
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    int res = 0;
    pq.push({0,0});
    while(!pq.empty())
    {
        auto p = pq.top();
        pq.pop();
        int weigth = p.first;
        int u = p.second;

        if(vis[u])
            continue;
        res += weigth;
        vis[u] = true;
        for(auto v : g[u])
        {
            if(vis[v[0]]== false){
                pq.push({v[1] , v[0]});
            }
        }
    }
    return res;
}
int main()
{
    cin >> nodecount >> edgecount;
    memset(vis,false,sizeof(vis));
    vector<vector<int>>g[10005];
    for(int i=1; i<=edgecount; i++)
    {
        int a,b,w;
        cin >> a >> b >> w;
        g[a].push_back({b,w});
        //As undirected graph so also push for b
        g[b].push_back({a,w});
    }
    int res = prims(0,g);
    cout << res << endl;
}
