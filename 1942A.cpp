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
        int n, k;
        cin >> n >> k;
        int a[n];
        if (k == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
        }
        else if (k == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
        }
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}