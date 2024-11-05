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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

bool isNonDecreasing(const vi &b)
{
    for (int i = 1; i < b.size(); ++i)
    {
        if (b[i] < b[i - 1])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    tc
    {
        int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 2)
        {
            cout << "YES" << endl;
            continue;
        }

        vi b(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            b[i] = __gcd(a[i], a[i + 1]);
        }

        if (isNonDecreasing(b))
        {
            cout << "YES" << endl;
            continue;
        }

        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            vi c;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    c.push_back(a[j]);
            }

            vi nb(c.size() - 1);
            for (int j = 0; j < c.size() - 1; j++)
            {
                nb[j] = __gcd(c[j], c[j + 1]);
            }

            if (isNonDecreasing(nb))
            {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
