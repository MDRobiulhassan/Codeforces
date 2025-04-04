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
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<char, int> lo;

        bool flag = false;

        for (int i = 0; i < n; ++i)
        {
            char t = s[i];

            if (lo.count(t) && lo[t] < i - 1)
            {
                flag = true;
                break;
            }

            lo[t] = i;
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}