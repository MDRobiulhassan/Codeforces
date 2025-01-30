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
        ll es = 0, os = 0, ec = 0, oc = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                es += a[i];
                ec++;
            }
            else
            {
                os += a[i];
                oc++;
            }
        }

        if (es % ec != 0)
            cout << "No";
        else if (os % oc != 0)
            cout << "No";
        else if (es / ec != os / oc)
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }

    return 0;
}