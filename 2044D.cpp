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
        int a[n];
        set<int> s;

        l1n
        {
            cin >> a[i];
            s.insert(i + 1);
        }

        l1n
        {
            if (s.find(a[i]) != s.end())
            {
                cout << a[i] << " ";
                s.erase(a[i]);
            }
            else
            {
                cout << *s.begin() << " ";
                s.erase(*s.begin());
            }
        }

        cout << endl;
    }

    return 0;
}