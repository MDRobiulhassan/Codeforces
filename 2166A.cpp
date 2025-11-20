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
        int n;
        cin >> n;

        string s;
        cin >> s;

        char lastchar = s[n - 1];

        int cnt = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != lastchar)
                cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}