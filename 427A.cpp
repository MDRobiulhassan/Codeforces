#include <iostream>
using namespace std;

int main()
{
    int n, a, police = 0, crime = 0;
    cin >> n;

    while (n--)
    {
        cin >> a;

        if (a == -1)
        {
            if (police > 0)
                police--;
            else
                crime++;
        }
        else
            police = police + a;
    }
    cout << crime << endl;

    return 0;
}