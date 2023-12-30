#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n], b[n], suma = 0, sumb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            suma += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());

        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[i])
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        cout << max(sum, suma) << endl;
    }

    return 0;
}