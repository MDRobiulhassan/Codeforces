#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)
// AP condition --> 2*b=a+c
int main()
{
    int t;
    cin >> t;
    tc
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (2 * b - a > 0 && (2 * b - a) % c == 0)
            cout << "YES";
        else if ((a + c) % 2 == 0 && (a + c) / 2 % b == 0)
            cout << "YES";
        else if (2 * b - c > 0 && (2 * b - c) % a == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}