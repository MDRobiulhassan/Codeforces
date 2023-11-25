#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a = 0, b = 0;
        cin >> n;

        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }
        if (a > b)
            cout << "A";
        else if (b > a)
            cout << "B";
        else
            cout << ">?";
        cout << endl;
    }

    return 0;
}