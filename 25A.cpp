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

    int even = 0, odd = 0, poseven = -1, posodd = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
            poseven = i;
        }
        else
        {
            odd++;
            posodd = i;
        }
    }

    if (even == 1)
        cout << poseven + 1;
    else
        cout << posodd + 1;
    cout << endl;
    return 0;
}