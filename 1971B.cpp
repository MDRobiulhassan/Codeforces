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
        string s, r;
        cin >> s;
        r = s;

        bool flag = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            reverse(s.begin() + i, s.end());
            if (s != r)
            {
                cout << "YES" << endl;
                cout << s << endl;
                flag = true;
                break;
            }
            else
                reverse(s.begin() + i, s.end());
        }

        if (!flag)
            cout << "NO" << endl;
    }

    return 0;
}