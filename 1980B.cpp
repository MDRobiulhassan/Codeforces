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
        int n, f, k;
        cin >> n >> f >> k;
        vi c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        int r = c[f - 1];

        sort(c.begin(), c.end(), greater<int>());

        vi p;
        for (int i = 0; i < n; i++)
        {
            if (c[i] == r)
            {
                p.push_back(i);
            }
        }

        bool is_removed = false;
        bool is_maybe = false;

        for (int pos : p)
        {
            if (pos < k)
                is_removed = true;
            else
                is_maybe = true;
        }

        if (is_removed && !is_maybe)
            cout << "YES" << endl;
        else if (!is_removed && is_maybe)
            cout << "NO" << endl;
        else
            cout << "MAYBE" << endl;
    }
}