#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, x, n, l = 1, h = 1e9;
        cin >> n;
        vector<int> b;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> x;
            if (a == 1)
                l = max(l, x);
            else if (a == 2)
                h = min(h, x);
            else
                b.push_back(x);
        }

        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] >= l and b[i] <= h)
                count++;
        }
        cout << max(h - l + 1 - count, 0) << endl;
    }

    return 0;
}
