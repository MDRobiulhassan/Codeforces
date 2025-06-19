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
    int t;
    cin >> t;
    tc
    {
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        vector<int> lastseen(3, -1);

        int shortlen = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            lastseen[s[i] - '1'] = i;

            if (lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1)
            {
                int l = min({lastseen[0], lastseen[1], lastseen[2]});
                int r = max({lastseen[0], lastseen[1], lastseen[2]});
                int len = r - l + 1;
                shortlen = min(shortlen, len);
            }
        }

        if (shortlen == INT_MAX)
            cout << 0;
        else
            cout << shortlen;
        cout << '\n';
    }

    return 0;
}