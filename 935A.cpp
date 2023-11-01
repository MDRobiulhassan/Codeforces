#include <iostream>
using namespace std;

int main()
{
    int n, l = 0;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if ((n - i) % i == 0)
            l++;
    }
    cout << l << endl;

    return 0;
}