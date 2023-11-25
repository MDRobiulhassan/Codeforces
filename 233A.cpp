#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    if (n % 2 == 1)
        cout << -1;
    else
    {
        int temp;
        for (int i = 0; i < n - 1; i += 2)
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}