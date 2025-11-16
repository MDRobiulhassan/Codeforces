#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vi pos(n + 1);
    for (int i = 0; i < n; i++)
        pos[a[i]] = i;

    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end(), [&](int u, int v)
             { return pos[u] < pos[v]; });
    }

    vi vis(n + 1, 0);
    vis[1] = 1;
    queue<int> q;
    q.push(1);

    vi bfs;

    while (!q.empty())
    {

        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    if (bfs == a)
        cout << "YES";
    else
        cout << "NO";
}
