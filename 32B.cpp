#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            cout << "2";
            i++;
        }
        else
            cout << "0";
    }
}