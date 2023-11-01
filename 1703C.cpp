#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int n, l;
        cin >> n;
        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i] >> s;
            l = a[i];

            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == 'U')
                {
                    if (l == 0)
                        l = 9;
                    else
                        l--;
                }
                else if (s[j] == 'D')
                {
                    if (l == 9)
                        l = 0;
                    else
                        l++;
                }
            }
            c[i] = l;
        }
        for (int k = 0; k < n; k++)
        {
            cout << c[k] << " ";
        }
        cout << endl;
    }

    return 0;
}