#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int maximum = max({a, b, c});
        int minimum = min({a, b, c});
        int middle = a + b + c - maximum - minimum;

        while ((minimum != maximum)||(middle != maximum))
        {
            if (minimum != maximum)
            {
                minimum++;
                n--;
            }
            if (middle != maximum)
            {
                middle++;
                n--;
            }
        }
        if (n % 3 == 0 && n>=0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}