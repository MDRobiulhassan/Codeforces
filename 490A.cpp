#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int skills[n];
    int p[n], m[n], pe[n];
    int pr = 0, mt = 0, phe = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> skills[i];
        if (skills[i] == 1)
            p[pr++] = i + 1;

        else if (skills[i] == 2)
            m[mt++] = i + 1;
        else
            pe[phe++] = i + 1;
    }

    int teams = min(min(pr, mt), phe);

    cout << teams << endl;

    for (int i = 0; i < teams; i++)
    {
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
    }

    return 0;
}
