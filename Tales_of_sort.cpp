#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;

    for (int i = 1; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 1; j < n; j++)
        {
            if (a[i] < a[i - 1])
            {
                a[i] = max(0, a[i] - 1);
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}