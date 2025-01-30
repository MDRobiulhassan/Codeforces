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
        int x, y, k;
        cin >> x >> y >> k;

        if (ceil(double(x) / k) <= ceil(double(y) / k))
            cout << (int)(2 * ceil(double(y) / k));
        else
            cout << (int)(2 * ceil(double(x) / k) - 1);
        cout << endl;
    }

    return 0;
}