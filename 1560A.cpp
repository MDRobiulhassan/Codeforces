#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, j = 0, i = 1, count = 0;
        cin >> n;
        int a[n];

        while (count != n)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                a[j] = i;
                j++;
                count++;
            }
            i++;
        }
        cout << a[n-1] << endl;
    }
}