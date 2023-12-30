#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = abs(a[0] - a[n - 1]), index1 = 1, index2 = n;
    for (int i = 1; i < n - 1; i++)
    {
        int diff = abs(a[i] - a[i + 1]);
        if (diff < min)
        {
            index1 = i + 1;
            index2 = i + 2;
        }
    }

    cout << index1 << " " << index2 << endl;

    return 0;
}