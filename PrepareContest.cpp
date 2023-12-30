#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], j, m = n;

        for (int i = 0; i < n; i++)
        {
            if (k >= 0)
            {
                j = n - k;
                cout << j << " ";
                m=j;
                k--;
            }
            else
                cout << j-i<< " ";
        }
        cout << endl;
    }

    return 0;
}