#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    char ch;
    long long d, s = 0;
    while (n--)
    {
        cin >> ch >> d;
        if (ch == '+')
            x += d;
        else
        {
            if (x - d < 0)
                s++;
            else
                x -= d;
        }
    }
    cout << x << " " << s << endl;

    return 0;
}