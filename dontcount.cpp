#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x, s;
        int n, m, count = 0, a = -1;
        cin >> n >> m;

        cin.ignore();
        getline(cin, x);
        getline(cin, s);

        while (x != s &&  x.find(s) != string::npos)
        {
            x += x;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}