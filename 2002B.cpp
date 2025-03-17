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
        vi a(n), b(n);
        for (int i =0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        if (a == b)
            cout << "Bob";
        else
        {
            reverse(a.begin(), a.end());
            if (a == b)
                cout << "Bob";
            else
                cout << "Alice";
        }
        cout << endl;
    }

    return 0;
}