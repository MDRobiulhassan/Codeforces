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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
                sum += a[i];
            else if (a[i] == 0 && sum > 0)
            {
                sum--;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}