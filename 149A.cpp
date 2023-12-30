#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12, greater<int>());

    int sum = 0, count = 0;
    if (k == 0)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < 12; i++)
        {
            sum += a[i];
            count++;
            if (sum >= k)
                break;
        }
        if (sum >= k)
            cout << count << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}