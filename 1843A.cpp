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
        int n, j = 0, k = 0;
        cin >> n;
        int a[n];
        int size_c1, size_c2;
        if (n % 2 == 0)
        {
            size_c1 = n / 2;
            size_c2 = n / 2;
        }
        else
        {
            size_c1 = n / 2 + 1; 
            size_c2 = n / 2;
        }

        int c1[size_c1], c2[size_c2];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                c1[j] = a[i];
                j++;
            }
            else
            {
                c2[k] = a[i];
                k++;
            }
        }
        int *max_c1 = max_element(c1, c1 + size_c1);
        int *min_c1 = min_element(c1, c1 + size_c1);
        int *max_c2 = max_element(c2, c2 + size_c2);
        int *min_c2 = min_element(c2, c2 + size_c2);

        int cost_c1 = *max_c1 - *min_c1;
        int cost_c2 = *max_c2 - *min_c2;

        int total_cost = cost_c1 + cost_c2;
        cout << total_cost << endl;
    }

    return 0;
}