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
    int n;
    cin >> n;
    vs s(n);

    for (int i = 0; i < n; i++)
        cin >> s[i];

    int maxlen = 0;

    for (char c1 = 'a'; c1 <= 'z'; ++c1)
    {
        for (char c2 = c1; c2 <= 'z'; ++c2)
        {
            int len = 0;
            for (string &i : s)
            {
                set<char> c(i.begin(), i.end());
                if (all_of(i.begin(), i.end(), [&](char ch)
                           { return ch == c1 || ch == c2; }))
                    len += i.size();
            }
            maxlen = max(maxlen, len);
        }
    }

    cout << maxlen << endl;
    return 0;
}
