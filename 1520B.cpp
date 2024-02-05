#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
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

        if (n < 10)
            cout << n << endl;

        else
        {
            int count = 0;

            for (int i = 1; i <= n; i = i * 10 + 1)
            {
                for (int j = 1; j <= 9; j++)
                {
                    if (i * j <= n)
                        count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}