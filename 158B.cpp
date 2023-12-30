#include <iostream>

using namespace std;

int main()
{
    int n, s, one = 0, two = 0, three = 0, four = 0;
    cin >> n;

    while (n--)
    {
        cin >> s;
        if (s == 1)
            one++;
        else if (s == 2)
            two++;
        else if (s == 3)
            three++;
        else if (s == 4)
            four++;
    }

    int total = four + three + two / 2;
    one -= three;

    if (two % 2 == 1)
    {
        total += 1;
        one -= 2;
    }

    if (one > 0)
    {
        total += (one + 3) / 4;
    }

    cout << total << endl;
    return 0;
}
