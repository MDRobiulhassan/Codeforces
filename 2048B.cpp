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
        int n, k;
        cin >> n >> k;

        vi a(n, -1);
        int count = 1;
        int i = k - 1;

        while (i <= n - 1)
        {
            a[i] = count;
            count++;
            i += k;
        }

        i = 0;
        while (i < n)
        {
            if (a[i] == -1)
            {
                a[i] = count;
                count++;
            }

            i++;
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}
