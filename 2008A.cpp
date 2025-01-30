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
        int a, b;
        cin >> a >> b;

        int sum = a + 2 * b;

        if (sum % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int half = sum / 2;
        int two = half / 2;

        int ndtwo = min(b, two);
        half -= ndtwo * 2;

        if (half <= a)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}