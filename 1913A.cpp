#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        bool flag = false;

        for (int i = 1; i < n; i++)
        {
            string a = s.substr(0, i);
            string b = s.substr(i);

            if (a[0] == '0' || b[0] == '0')
                continue;

            int sa = stoi(a);
            int sb = stoi(b);

            if (sa < sb)
            {
                cout << a << " " << b << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << -1 << endl;
    }

    return 0;
}