//almost but unsolved
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
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
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i] + i + 1;
        }
        reverse(a.begin(), a.end());
        for (int i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}