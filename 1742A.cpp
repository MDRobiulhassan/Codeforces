#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c;
        if (a + b == c || b + c == a || c + a == b)
            cout << "YES"<<endl;
        else
            cout << "No"<<endl;
    }
}