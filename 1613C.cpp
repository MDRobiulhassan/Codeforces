#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <climits>
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

    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 1;
        while (true)
        {
            int totalElements = n * (i + 1);

            if (totalElements >= h)
            {
                cout << i << endl;
                break;
            }

            i++;
        }
    }

    return 0;
}