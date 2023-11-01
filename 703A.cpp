#include <iostream>
using namespace std;

int main()
{
    int n, m, c, M = 0, C = 0, draw = 0;
    ;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> m >> c;

        if (m > c)
            M++;
        else if (m < c)
            C++;
        else if (m == c)
            draw++;
    }

    if (draw == n || M == C)
        cout << "Friendship is magic!^^";
    else if (M > C)
        cout << "Mishka";
    else
        cout << "Chris";
    cout << endl;

    return 0;
}