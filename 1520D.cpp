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

        ll count = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;

            count += m[in - i]++;
        }

        cout << count << endl;
    }

    return 0;
}