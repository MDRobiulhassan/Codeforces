#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
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
        string hs24 = "", ms24 = "";
        hs24 += s[0], hs24 += s[1];
        ms24 += s[3], ms24 += s[4];
        if (stoi(hs24) < 12)
        {
            if (hs24[0] == '0' && hs24[1] == '0')
                cout << "12:" << ms24;
            else
                cout << hs24 << ":" << ms24;
            cout << " AM";
        }
        else
        {
            if (stoi(hs24) == 12)
                cout << hs24 << ":" << ms24;
            else
            {
                if (stoi(hs24) - 12 < 10)
                    cout << 0 << stoi(hs24) - 12 << ":" << ms24;
                else
                    cout << stoi(hs24) - 12 << ":" << ms24;
            }
            cout << " PM";
        }
        cout << endl;
    }

    return 0;
}