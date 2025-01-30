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
        int a[n], b[n];

        l1n
            cin >>a[i];

        l1n
            cin >>b[i];

        int sum = a[n - 1];
        n = n - 1;

        l1n
        {
            if (a[i] > b[i + 1])
                sum += (a[i] - b[i + 1]);
        }

        cout << sum << endl;
    }

    return 0;
}