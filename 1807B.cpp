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
        int m = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                m += a[i];
            else
                b += a[i];
        }

        if (m > b)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}