#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s, s2 = "hello";
    cin >> s;

    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s2[j])
            j++;
    }
    if (j == s2.size())
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}