#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define si set<int>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin >> t;

    tc
    {
        int n, d;
        cin >> n >> d;
        cout << 1;
        if (n >= 3 || d % 3 == 0)
            cout << " 3";
        if (d == 5)
            cout << " 5";
        if (d == 7 || n >= 3)
            cout << " 7";
        if (d == 9 || (n >= 3 && d % 3 == 0) || n >= 6)
            cout << " 9";
        cout << endl;
    }
}