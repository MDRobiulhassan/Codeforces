#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int a[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= b)
        {
            sum += a[i];
            if (sum > d)
            {
                count++;
                sum = 0;
            }
        }
    }

    cout << count << endl;

    return 0;
}