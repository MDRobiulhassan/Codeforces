#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long a, sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }

        long long r = sqrt(sum);

        if (r * r == sum)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}