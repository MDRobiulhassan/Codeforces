#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 0;
    cin >> n;

    while (sum <= n)
    {
        i++;
        for (int j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
    }
    cout << i-1 << endl;

    return 0;
}