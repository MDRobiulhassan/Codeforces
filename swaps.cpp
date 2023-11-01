#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    do
    {
        count++;
    } while (next_permutation(a, a + n) && unique(a, a + n) == a + n);

    cout << count << endl;

    return 0;
}
