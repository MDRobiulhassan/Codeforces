#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;

        int status = a;

        string str;
        cin >> str;

        if (a == n)
            cout << "YES";
        else
        {
            for (int i = 0; i < q; i++)
            {
                if (str[i] == '+')
                    status++;
                else
                    status--;
            }
            if (status == n)
                cout << "YES";
            else if (status == a)
                cout << "MAYBE";
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}