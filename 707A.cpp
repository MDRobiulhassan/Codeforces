#include <iostream>
using namespace std;

int main()
{
    char ch;
    int m, n, i, j, r = 0;
    cin >> n >> m;

    for (i = 1; i <= n*m; i++)
    {
        cin >> ch;
        if (ch == 'W' || ch == 'B' || ch == 'G')
        {
            r++;
        }
    }
    if (r == m * n)
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;
}