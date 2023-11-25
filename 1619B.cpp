#include <iostream>
#include <unordered_set>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_set<int> count;

        for (int i = 1; i * i <= n; i++)
        {
            count.insert(i * i);
        }

        for (int i = 1; i * i * i <= n; i++)
        {
            count.insert(i * i * i);
        }

        cout << count.size() << endl;
    }

    return 0;
}
