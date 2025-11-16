#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum /= 2;
    sort(a, a + n);

    int div = 0, count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        div += a[i];
        count++;
        if (div > sum)
            break;
    }

    cout << count << endl;

    return 0;
}