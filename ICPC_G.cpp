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

    string d;
    getline(cin, d);

    while (t--)
    {
        string s;
        getline(cin, s);

        ll sz = 0;
        ll stlen = 0;
        bool null = false;

        int n = s.length();

        for (int i = 0; i < n; ++i)
        {
            if (i + 1 < n && s[i] == '\\' && s[i + 1] == '0')
            {

                sz++;

                if (!null)
                    null = true;

                i++;
            }
            else
            {

                sz++;

                if (!null)
                    stlen++;
            }
        }

        sz++;

        cout << sz << " " << stlen << "\n";
    }

    return 0;
}