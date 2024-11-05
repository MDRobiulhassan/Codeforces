#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int diff1 = x1 - y1;
        int diff2 = x2 - y2;

        if ((diff1 > 0 && diff2 < 0) || (diff1 < 0 && diff2 > 0))
            cout << "NO";
        else if (diff1 == diff2)
            cout << "YES";
        else
        {

            if (min(x1, x2) >= min(y1, y2) && max(x1, x2) <= max(y1, y2))
                cout << "NO";
            else
                cout << "YES";
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int d1 = a1 - b1;
        int d2 = a2 - b2;

        if ((d1 > 0 && d2 < 0) || (d1 < 0 && d2 > 0)) {
            cout << "NO";
        } else if (d1 == d2) {
            cout << "YES";
        } else {
            if (min(a1, a2) >= min(b1, b2) && max(a1, a2) <= max(b1, b2)) {
                cout << "NO";
            } else {
                cout << "YES";
            }
        }
        cout << endl;
    }
    
    return 0;
}
