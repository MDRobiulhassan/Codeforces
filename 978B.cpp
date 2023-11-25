#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < n - 2; i++)
    {
        if (str[i] == 'x' && str[i + 1] == 'x' && str[i + 2] == 'x')
            count++;
    }
    cout << count << endl;

    return 0;
}