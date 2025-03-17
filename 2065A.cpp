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
        string s;
        cin >> s;

        s = s.substr(0, s.size() - 2) + "i";

        cout << s << endl;
    }

    return 0;
}