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

        int a[n], h[100] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            h[a[i]]++;
        }

        int count = n;
        for (int i = 0; i < n; ++i)
        {
            int op = 0;
            for (int j = 0; j < n; ++j)
            {
                if (a[(i + j) % n] != a[i])
                {
                    op++;
                }
            }
            count = min(count, op);
        }
        cout << count << endl;
    }

    return 0;
}