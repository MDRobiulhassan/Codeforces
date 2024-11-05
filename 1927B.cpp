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
        int a[n];
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        char ch = 'a';
        string s = "";
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                s += ch;
                m[ch]++;
                ch++;
            }
            else
            {
                for (auto &it : m)
                {
                    if (it.second == a[i])
                    {
                        s += it.first;
                        it.second++;
                        break;
                    }
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}