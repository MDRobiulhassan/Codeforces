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
        int a[n], count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 3 || a[i] == 1)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}