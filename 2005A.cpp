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
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;

        string s = "aeiou";
        string ans = "";
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            ans += s[j++];
            if (j == s.size())
                j = 0;
        }

        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}