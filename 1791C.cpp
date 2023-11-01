#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;
        cin.ignore();

        string s;
        cin >> s;
        int size = s.size();
        int j = 0, k = size - 1;
        for (int i = 0; i < size / 2; i++)
        {
            if ((s[j] == '0' && s[k] == '1') || (s[j] == '1' && s[k] == '0'))
            {
                count++;
                j++;
                k--;
            }
            else
                break;
        }
        cout << size - (2 * count) << endl;
    }

    return 0;
}