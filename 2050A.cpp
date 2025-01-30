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
        int n, m;
        cin >> n >> m;

        string s;
        int count = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            sum += s.size();
            if (sum <= m)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}