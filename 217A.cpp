#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

void dfs(int i, vector<vector<int>> &adj, vi &vis)
{
    vis[i] = 1;

    for (auto it : adj[i])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin>>t;
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].first == a[j].first || a[i].second == a[j].second)
            {
                adj[i].pb(j);
                adj[j].pb(i);
            }
        }
    }

    vi vis(n, 0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            count++;
            dfs(i, adj, vis);
        }
    }

    cout << count - 1;

    return 0;
}