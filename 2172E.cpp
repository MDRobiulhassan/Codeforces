#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

vector<string> arr12;
vector<string> arr123;
vector<string> arr124;
void permute(string s, int l)
{
    if (l == s.size())
    {
        if (s.size() == 2)
        {
            arr12.push_back(s);
        }
        else if (s.size() == 3)
        {
            arr123.push_back(s);
        }
        else if (s.size() == 4)
        {
            arr124.push_back(s);
        }
        return;
    }

    for (int i = l; i < s.size(); i++)
    {
        swap(s[l], s[i]);
        permute(s, l + 1);
        swap(s[l], s[i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    permute("12", 0);
    permute("123", 0);
    permute("1234", 0);
    sort(arr12.begin(), arr12.end());
    sort(arr123.begin(), arr123.end());
    sort(arr124.begin(), arr124.end());

    int t;
    cin >> t;
    tc
    {
        int n, j, k;
        cin >> n >> j >> k;

        int a = 0, b = 0;
        if (n == 12)
        {
            string f = arr12[j - 1];
            string s = arr12[k - 1];

            for (int i = 0; i < f.size(); i++)
            {
                if (f[i] == s[i])
                    a++;
            }

            b = 2 - a;
        }

        else if (n == 123)
        {
            string f = arr123[j - 1];
            string s = arr123[k - 1];

            for (int i = 0; i < f.size(); i++)
            {
                if (f[i] == s[i])
                    a++;
            }

            b = 3 - a;
        }

        else
        {
            string f = arr124[j - 1];
            string s = arr124[k - 1];

            for (int i = 0; i < f.size(); i++)
            {
                if (f[i] == s[i])
                    a++;
            }

            b = 4 - a;
        }

        cout << a << "A" << b << "B\n";
    }

    return 0;
}