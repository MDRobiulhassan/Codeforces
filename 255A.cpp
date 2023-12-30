#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, biceps = 0, back = 0, chest = 0, bc = 2, c = 1, b = 3;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i == c)
        {
            chest += a;
            c += 3;
        }
        else if (i == bc)
        {
            biceps += a;
            bc += 3;
        }
        else
        {
            back += a;
            b += 3;
        }
    }

    if (chest > biceps && chest > back)
        cout << "chest";
    else if (biceps > chest && biceps > back)
        cout << "biceps";
    else
        cout << "back";
    cout << endl;

    return 0;
}