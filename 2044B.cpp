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
        string a;
        cin >> a;

        string b = "";
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
                b += 'q';
            else if (a[i] == 'q')
                b += 'p';
            else
                b += 'w';
        }

        cout << b << endl;
    }

    return 0;
}