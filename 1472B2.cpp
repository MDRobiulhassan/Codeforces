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
        int a[n], even = 0, odd = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
            sum += a[i];
        }
        if (sum % 2 == 0 || odd == even)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}