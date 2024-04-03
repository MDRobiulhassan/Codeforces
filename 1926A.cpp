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

        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }

        if (a > b)
            cout << "A";
        else
            cout << "B";
        cout << endl;
    }

    return 0;
}