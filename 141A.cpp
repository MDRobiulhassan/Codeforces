#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string guest, host, pile;
    getline(cin, guest);
    getline(cin, host);
    getline(cin, pile);

    string str = guest + host;

    sort(str.begin(), str.end());
    sort(pile.begin(), pile.end());

    if (str == pile)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}