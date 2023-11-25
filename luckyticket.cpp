#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            string concat = s[i] + s[j];
            int len = concat.size();

            if (len % 2 == 0)
            {
                int sum1 = 0, sum2 = 0;
                for (int k = 0; k < len / 2; k++)
                {
                    sum1 += concat[k] - '0';
                }
                for (int k = len / 2; k < len; k++)
                {
                    sum2 += concat[k] - '0';
                }

                if (sum1 == sum2)
                    count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
