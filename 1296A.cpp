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
        int n;
        cin >> n;
        ll sum = 0;

        int in, odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            sum += in;
            if (in % 2 == 0)
                even++;
            else
                odd++;
        }

        if (sum % 2 != 0)
            cout << "YES";
        else if (odd != 0 && even != 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}