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
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool win = (s[0] == '1' || s[n - 1] == '1');

        for (int i = 1; i < n && !win; i++)
        {
            if (s[i] == '1' && s[i - 1] == '1')
                win = true;
        }

        if (win)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}