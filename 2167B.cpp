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
        string s, t;
        cin >> s >> t;

        vi hs(26, 0);
        vi ht(26, 0);

        for (int i = 0; i < s.size(); i++)
            hs[s[i] - 'a']++;

        for (int i = 0; i < t.size(); i++)
            ht[t[i] - 'a']++;

        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (hs[i] < ht[i])
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}