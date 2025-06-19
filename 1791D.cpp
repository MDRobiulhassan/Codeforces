//TLE

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
        string s;
        cin >> n >> s;

        int len = 0;
        for (int i = 1; i < n; i++)
        {
            string a = s.substr(0, i);
            string b = s.substr(i);

            set<char> sa(a.begin(), a.end());
            set<char> sb(b.begin(), b.end());

            int lab = sa.size() + 
            sb.size();
            len = max(len, lab);
        }

        cout << len << '\n';
    }

    return 0;
}