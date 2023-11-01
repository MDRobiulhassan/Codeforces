#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            sum = sum + a[j];
        }
        if (sum % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
