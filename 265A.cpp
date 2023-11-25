#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int j = 0;

    for (int i = 0; i < t.size(); i++)
    {
        if (s[j] == t[i])
            j++;
    }
    cout << j+1 << endl;

    return 0;
}