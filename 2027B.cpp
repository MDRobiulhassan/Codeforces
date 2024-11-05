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

        int count = 0, lcs = 0;
        for (int i = 0; i < n; i++)
        {
            lcs = 0;
            for (int j = i; j < n; j++)
            {
                if (a[i] >= a[j])
                    lcs++;
            }
            count = max(lcs, count);
        }
        cout << n - count << endl;
    }

    return 0;
}