#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int h, count1 = 0, count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> h;
            if (h == 1)
                count1++;
            else
                count++;
        }

        cout << ceil(double(count1) / 2) + count << endl;
    }

    return 0;
}