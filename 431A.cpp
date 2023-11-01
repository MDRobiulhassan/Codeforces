#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    cin.ignore();
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
            sum = sum + a;
        else if (str[i] == '2')
            sum = sum + b;
        else if (str[i] == '3')
            sum = sum + c;
        else if (str[i] == '4')
            sum = sum + d;
    }

    cout << sum;

    return 0;
}