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

        int n = s.size();

        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << 1 << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << n << endl;
    }

    return 0;
}