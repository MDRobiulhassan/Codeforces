#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int j = 1; j <= t; j++)
    {
        string str, str2;
        getline(cin, str);
        int d = str.size();
        for (int i = 0; i < d - 2; i++)
        {
            if (i % 2 == 0)
            {
                str2 += str[i];
            }
        }
        cout << str2 << str[d - 2] << str[d - 1] << endl;
    }
}
