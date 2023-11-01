#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, p, a[250], q, i, count = 0;
    cin >> n >> p;

    for (i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    for (i = p; i < p + q; i++)
    {
        cin >> a[i];
    }

    sort(a, a + (p + q));

    for (i = 0; i < p + q; i++)
    {
        if (a[i] != a[i + 1])
            count++;
    }

    if (count == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}