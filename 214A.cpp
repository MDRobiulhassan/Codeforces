#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i * i + j == n && i + j * j == m)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}