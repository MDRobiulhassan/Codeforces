#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

bool detect(int src, vector<vector<int>> &adj, vi &vis)
{
    vis[src] = 1;
    queue<int> q;
    q.push(src);
    bool isCycle = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        if (adj[node].size() != 2)
            isCycle = false;

        for (int v : adj[node])
        {
            if (!vis[v])
            {
                vis[v] = 1;
                q.push(v);
            }
        }
    }

    return isCycle;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin>>t;

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    vi vis(n + 1, 0);
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (detect(i, adj, vis))
                count++;
        }
    }

    cout << count;

    return 0;
}