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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            if (a[0] == 0)
                cout << 1;
            else
                cout << 0;
            cout << endl;
        }
        else
        {
            ll sum = 0;
            int mx = 0, count = 0;
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
                mx = max(mx, a[i]);

                if (sum - mx == mx)
                    count++;
            }

            cout << count << endl;
        }
    }

    return 0;
}