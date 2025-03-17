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
        int n;
        cin >> n;

        int a[n];
        int p = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (a[0] == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}