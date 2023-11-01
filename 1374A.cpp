#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        int result = n - (n - y) % x;
        cout << result << endl;
    }

    return 0;
}
