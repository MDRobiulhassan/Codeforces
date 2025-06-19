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
    // int t;
    // cin>>t;

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int l = 0, r = 0;
    int maxf = 0;
    vi h(2, 0);
    int maxlen = 0;

    while (r < n)
    {
        h[s[r] - 'a']++;
        maxf = max(maxf, h[s[r] - 'a']);

        if ((r - l + 1) - maxf > k)
        {
            h[s[l] - 'a']--;
            l++;
        }

        int len = r - l + 1;
        maxlen = max(len, maxlen);
        r++;
    }

    cout << maxlen;

    return 0;
}