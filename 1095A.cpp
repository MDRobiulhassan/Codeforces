#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s, s2;
    cin >> s;
    int i = 0, c = 1;

    while (i < n)
    {
        s2 += s[i];
        i = c + i;
        c++;
    }
    cout << s2 << endl;

    return 0;
}