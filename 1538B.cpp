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
        int a[n], sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        double avg = static_cast<double>(sum) / n;
        if (avg != static_cast<int>(avg))
            cout << -1;
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (avg - a[i] < 0)
                    count++;
            }
            cout << count;
        }
        cout << endl;
    }

    return 0;
}