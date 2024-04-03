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

        int k;
        if (n % 2 == 0)
            k = n + 1;
        else
            k = n;
        for (int i = 0; i < n; i++)
        {
            if (k > 1000)
                k = 1;
            cout << k << " ";
            k += 2;
        }
        cout << endl;
    }

    return 0;
}