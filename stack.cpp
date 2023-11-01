#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int b[n];

        int j = 0, i = n+1;
        while (j != n)
        {
            if (((3 * (i + 2)) / (i + (i + 1))) != 0)
            {
                b[j] = i;
                j++;
            }
            i++;
        }

        int k = 0;
        while (j != 0)
        {
            cout << b[k] << " ";
            j--;
            k++;
        }
        cout << endl;
    }

    return 0;
}