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
        string s, s2;
        cin >> n;
        cin >> s >> s2;

        int counts = 0, counts2 = 0, mismatch = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                counts++;
            if (s2[i] == '1')
                counts2++;
            if (s[i] != s2[i])
                mismatch++;
        }

        int r = abs(counts - counts2);
        count = r + (mismatch - r) / 2;

        cout << count << endl;
    }

    return 0;
}