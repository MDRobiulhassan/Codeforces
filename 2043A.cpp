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
        ll n;
        cin >> n;

        ll count = 1;
        while (n > 3)
        {
            n = n / 4;
            count *= 2;
        }

        cout << count << endl;
    }

    return 0;
}