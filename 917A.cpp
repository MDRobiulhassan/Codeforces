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
    string s;
    cin >> s;

    int n = s.size();
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == '(')
                l++;
            else
                l--;
            if (s[j] == ')')
                r--;
            else
                r++;

            if (r < 0)
                break;
            if (l < 0)
                l = 1;
            if (l == 0)
                count++;
        }
    }

    cout << count;

    return 0;
}
