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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> a;
        ;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        string s2;
        cin >> s2;
        sort(s2.begin(), s2.end());

        int i = 0;
        for (auto it : a)
        {
            s[it - 1] = s2[i++];
        }
        cout << s << endl;
    }

    return 0;
}