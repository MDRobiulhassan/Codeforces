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

const int N = 1e5 + 10;
int pf[N];

int binarySearch(int q, int n)
{
    int l = 0, h = n;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (pf[mid] >= q && (mid == 0 || pf[mid - 1] < q))
            return mid + 1;
        else if (pf[mid] > q)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    pf[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pf[i] = pf[i - 1] + a[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        cout << binarySearch(q, n) << endl;
    }

    return 0;
}
