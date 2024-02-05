#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;

        for (int i = 2; i < 30; i++)
        {
            int rem = (pow(2, i) - 1);
            int div = n % rem;
            if (div == 0)
            {
                x = n / rem;
                break;
            }
        }

        cout << x << endl;
    }

    return 0;
}