#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s, ms = "Timur";
        getline(cin, s);
        sort(ms.begin(), ms.end());
        sort(s.begin(), s.end());

        if (s == ms)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}