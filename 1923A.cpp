#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int count = 0;
        bool cone = false;
        int zero = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 1)
            {
                if (cone)
                {
                    count += zero;
                    zero = 0;
                }
                cone = true;
            }
            else if (cone)
            {
                zero++;
            }
        }

        cout << count << endl;
    }

    return 0;
}