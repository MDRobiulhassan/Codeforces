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
        cin>>n;
        vi a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                a.pop_back();
                a.pb(b[i]);
                count++;
            }
            sort(a.begin(), a.end());
        }

        cout << count << endl;
    }

    return 0;
}