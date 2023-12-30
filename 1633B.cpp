#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zero++;

            else
                one++;
        }
        if (zero != one)
            cout << min(zero, one) << endl;
        else
            cout << zero - 1 << endl;
    }
    return 0;
}