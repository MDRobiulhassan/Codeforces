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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vi count(26, 0);

        for (int i = 0; i < n; i++)
        {
            count[s[i] - 'a']++;
        }

        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                if (count[i] % 2 != 0)
                    odd++;
            }
        }
        if (odd > k + 1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}