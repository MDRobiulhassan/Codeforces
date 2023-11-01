#include <iostream>
using namespace std;

int main()
{
    int n, m, ans, i;
    cin >> n >> m;

    for (i = n + 1; i <= m; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            ans = i;
            break;
        }
    }

    if (i == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}