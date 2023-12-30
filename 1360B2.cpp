// Two Pointer

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
        sort(a, a + n);

        int m = abs(a[0] - a[1]);
        int left = 0, right = 1;

        while (right < n)
        {
            int d = abs(a[left] - a[right]);
            if (d < m)
                m = d;

            left++;
            right++;
        }

        cout << m << endl;
    }

    return 0;
}
