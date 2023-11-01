#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string pi = "3141592653589793238462643383279";
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
                count++;
            else
                break;
        }
        cout << count << endl;
    }

    return 0;
}