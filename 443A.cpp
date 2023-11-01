#include <iostream>
#include <set>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    set<char> a;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            a.insert(str[i]);
    }

    cout << a.size();

    return 0;
}