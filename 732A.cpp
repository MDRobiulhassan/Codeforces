#include <iostream>
using namespace std;

int main()
{
    int k, r, sum = 0, i = 0;
    cin >> k >> r;

    while (1)
    {
        i++;
        sum = i * k;

        if (sum % 10 == 0 || sum % 10 == r)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}