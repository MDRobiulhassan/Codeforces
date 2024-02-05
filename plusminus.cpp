#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+')
                sum += 1;
            else
                sum -= 1;
        }

        cout << abs(sum) << endl;
    }

    return 0;
}