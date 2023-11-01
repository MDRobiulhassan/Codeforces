#include<iostream>
using namespace std;

int main()
{
    int t, i;
    cin >> t;

    for (i = 1; i <= t; i++)
    {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;

        if (a < b)
            count++;
        if (a < c)
            count++;
        if (a < d)
            count++;

        cout << count << endl;
    }
}