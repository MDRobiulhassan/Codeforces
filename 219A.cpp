#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
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
    int h[26] = {0};
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    l1n
    {
        h[s[i] - 'a']++;
    }

    n=26;
    l1n
    {
        if (h[i] % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    string s2 = "";
    l1n
    {
        for (int j = 0; j < h[i] / k; j++)
        {
            s2 += (char)('a' + i);
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << s2;
    }

    return 0;
}
