#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int *maximum = max_element(a, a + n);
        int *minimum = min_element(a, a + n);
        int maxpos = -1, minpos = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == *maximum)
                maxpos = i + 1;
            else if (a[i] == *minimum)
                minpos = i + 1;
        }
        int maxd = min(abs(0 - maxpos), abs(n - maxpos));
        int mind = min(abs(0 - minpos), abs(n - minpos));

        int result = min(minpos + 1, min(n - maxpos, min(n - minpos, maxpos + 1)));


        cout << result << endl;
    }

    return 0;
}
