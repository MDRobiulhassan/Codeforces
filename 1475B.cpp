#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n < 2020)
            cout << "NO";
        else if (n % 2020 == 0)
            cout << "YES";
        else if (n % 2021 == 0)
            cout << "YES";
        else if (n % 2020 <= n / 2020)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
