#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;

        string notifications;
        cin >> notifications;

        int online_subscribers = a;

        for (char notification : notifications)
        {
            if (notification == '+')
            {
                online_subscribers++;
            }
            else
            {
                online_subscribers = max(online_subscribers - 1, 0);
            }
        }

        if (online_subscribers == n)
        {
            cout << "YES" << endl;
        }
        else if (online_subscribers == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}
