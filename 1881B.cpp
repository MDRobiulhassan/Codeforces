#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        if (a[0] == a[1] && a[1] == a[2])
            cout << "YES" << endl;
        else
        {
            sort(a, a + 3);
            int max = a[2], min = a[0], mid = a[1];

            int count = 0;
            bool flag = true;
            for (int i = 1; i <= 4; i++)
            {
                if (max != min)
                {
                    max -= min;
                    ++count;
                }
                else if (mid != min)
                {
                    mid -= min;
                    count++;
                }
            }

            if (count <= 3)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }

    return 0;
}