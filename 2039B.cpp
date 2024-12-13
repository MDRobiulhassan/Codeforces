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
        bool flag = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                cout << s[i - 1] << s[i] << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            for (int i = 2; i < s.size(); i++)
            {
                if (s[i] != s[i - 2])
                {
                    cout << s[i - 2] << s[i - 1] << s[i] << endl;
                    flag = true;
                    break;
                }
            }
        }

        if (!flag)
            cout << -1 << endl;
    }

    return 0;
}