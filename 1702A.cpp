#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int k = s.size()-1;
        int d = abs(stoi(s) - pow(10, k));

        cout << d << endl;
    }

    return 0;
}