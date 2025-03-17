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

        if (n < 5)
            cout << -1;
        else
        {
            for (int i = 2; i <= n; i += 2)
            {
                if (i != 4)
                    cout << i << " ";
            }
            cout << "4 5 ";
            for (int i = 1; i <= n; i += 2)
            {
                if (i != 5)
                    cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}