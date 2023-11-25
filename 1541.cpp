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

        int bound = 1;

        if (n % 2)
        {
            bound = 4;
            cout << 3 << " " << 1 << " " << 2 << " ";
        }

        for (int i = bound; i < n; i += 2)
        {
            cout << i+1 << " " << i  << " ";
        }

        cout << endl;
    }

    return 0;
}
