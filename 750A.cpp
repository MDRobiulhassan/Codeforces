#include <iostream>
using namespace std;

int main()
{
    int n, k, sum = 0, count = 0;
    cin >> n >> k;
    int rem = 240 - k;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (5 * i);
        if (sum <= rem)
            count++;
        else
            break;
    }
    cout << count << endl;

    return 0;
}