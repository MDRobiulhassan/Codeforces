#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int len = s.size();

    int count = 0;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0)
        cout << "YES";

    else
    {
        while (n != 0)
        {
            int r = n % 10;
            if (r == 7 || r == 4)
            {
                count++;
                n = n / 10;
            }
            else
                break;
        }
        if (count == s.size())
            cout << "YES";
        else
            cout << "NO";
    }
    cout << endl;

    return 0;
}