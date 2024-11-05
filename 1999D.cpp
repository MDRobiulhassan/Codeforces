#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
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
        string s, t;
        cin >> s >> t;

        int n = s.size(), m = t.size();
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (j < m)
                    s[i] = t[j++];
                else
                    s[i] = 'a';
            }
            else if (s[i] == t[j])
                j++;
        }
        if (j >= t.size())
            cout << "YES" << endl
                 << s << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}