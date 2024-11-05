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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int h[26] = {0};

        for (int i = 0; i < n; i++)
        {
            h[s[i] - 'A']++;
        }

        // for (int i = 0; i < 7; i++)
        // {
        //     cout << h[i] << " ";
        // }
        int count = 0;
        for (int i = 0; i < 7; i++)
        {
            if (h[i] < m)
                count += (m - h[i]);
        }

        cout << count << endl;
    }

    return 0;
}