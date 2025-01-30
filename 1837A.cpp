#include <bits/stdc++.h>
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
        int x, k;
        cin >> x >> k;

        if (x % k == 0)
            cout << 2 << endl
                 << "1 " << x - 1 << endl;

        else
            cout << 1 << endl
                 << x << endl;
    }

    return 0;
}