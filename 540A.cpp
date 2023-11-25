#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, move = 0, dif = 0;
    cin >> n;
    string d, l;
    cin >> d;
    cin >> l;

    for (int i = 0; i < d.size(); i++)
    {
        dif = abs(d[i] - l[i]);
        if (dif < 5)
            move = move + dif;
        else
        {
            if (d[i] > l[i])
                move = move + abs(l[i] + 10 - d[i]);
            else
                move = move + abs(d[i] + 10 - l[i]);
        }
    }
    cout << move << endl;

    return 0;
}