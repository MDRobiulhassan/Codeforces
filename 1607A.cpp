#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int size1 = s1.size();
        int size2 = s2.size();
        int a[size2], k = 0;
        //sort(s2.begin(), s2.end());

        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size1; j++)
            {
                if (s2[i] == s1[j])
                {
                    a[k] = j + 1;
                    k++;
                    break;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < size2 - 1; i++)
        {
            sum = sum + abs(a[i] - a[i + 1]);
        }
        cout << sum << endl;
    }

    return 0;
}