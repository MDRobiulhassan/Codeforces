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
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even > 0 && odd > 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}