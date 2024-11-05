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
    // int t;
    // cin>>t;
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> a;

    for (int i = 0; i < m; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        a.insert({s1, s2});
    }

    string ans;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        auto it = a.find(s);
        if ((*it).first.length() > (*it).second.length())
        {
            ans += (*it).second;
            ans += " ";
        }
        else if ((*it).first.length() < (*it).second.length())
        {
            ans += (*it).first;
            ans += " ";
        }
        else
        {
            ans += (*it).first;
            ans += " ";
        }
    }

    cout << ans << endl;

    return 0;
}