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
        string s;
        cin >> s;
        string s2;
        pair<int, int> a, b;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                s2 = s.substr(i);
                a = {i, s.size() - 1};
                break;
            }
        }

        if (s2.empty())
            cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
        else
        {
            int l = 0, x = 0;

            for (int i = 0; i < s2.size(); i++)
            {
                if (s2[i] == '0')
                {
                    x = i;
                    l = s2.size() - i;
                    break;
                }
            }

            if (l == 0)
            {
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == '0')
                    {
                        b = {i, i};
                        break;
                    }
                }
            }
            else
            {
                b = {0, 0};
                string ans = s2;

                for (int i = 0; i + l <= s.size(); i++)
                {
                    string n = s2;

                    for (int j = i; j < i + l; j++)
                        n[j - i + x] = ((n[j - i + x] - '0') ^ (s[j] - '0')) + '0';

                    if (n > ans)
                    {
                        ans = n;
                        b = {i, i + l - 1};
                    }
                }
            }

            cout << a.first + 1 << " " << a.second + 1 << " " << b.first + 1 << " " << b.second + 1 << endl;
        }
    }

    return 0;
}