#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, flag = 0;
    cin >> n;
    int point[n];

    for (int i = 0; i < n; i++)
    {
        cin >> point[i];
    }
    int max = point[0];
    int min = point[0];
    for (int i = 1; i < n; i++)
    {
        if (point[i] > max)
        {
            max = point[i];
            count++;
        }
        if (point[i] < min)
        {
            min = point[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}