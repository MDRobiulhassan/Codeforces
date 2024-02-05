#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    string a, b, c;

    while (t--)
    {
        int n;
        cin >> n;
        cin >> a >> b >> c;
        
        bool possible=false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                possible=true;
                break;
            }
        }

        if (possible)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}