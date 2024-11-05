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
        int a, b, c;
        cin >> a >> b >> c;
        ll mp = 0;

        for (int i = 0; i <= 5; ++i)
        {
            for (int j = 0; j <= 5 - i; ++j)
            {
                int k = 5 - i - j;
                int new_a = a + i;
                int new_b = b + j;
                int new_c = c + k;
                long long cp = static_cast<long long>(new_a) * new_b * new_c;
                mp = max(mp, cp);
            }
        }

        cout << mp << endl;
    }
    return 0;
}