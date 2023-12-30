#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, s;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s > dragons[i].first)
        {
            s += dragons[i].second;
            count++;
        }
    }

    if (count == n)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}
