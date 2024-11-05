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

const int N = 105;

int main()
{
    int t;
    cin >> t;

    tc
    {
        int h[N] = {0};
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            h[a[i]]++;
        }

        int count = 0;
        for (int i = 0; i < N; i++)
        {
            count += (h[i] / 3);
        }
        cout << count << endl;
    }
    return 0;
}