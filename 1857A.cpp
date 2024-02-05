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
        int n, sum = 0;
        cin >> n;
        int in;

        for (int i = 0; i < n; i++)
        {
            cin >> in;
            sum += in;
        }

        if (sum % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}