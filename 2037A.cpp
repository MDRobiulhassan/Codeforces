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
        int n;
        cin >> n;
        int h[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            h[in]++;
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            count+=(h[i]/2);
        }
        cout << count << endl;
    }

    return 0;
}