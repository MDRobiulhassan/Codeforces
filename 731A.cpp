#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    string s;
    cin >> s;
    int d = abs(s[0] - 'a'), count = 0;

    if (d <= 13)
        count += d;
    else
        count += (26 - d);

    for (int i = 0; i < s.size() - 1; i++)
    {
        d = abs(s[i] - s[i + 1]);

        if (d <= 13)
            count += d;
        else
            count += (26 - d);
    }

    cout << count << endl;

    return 0;
}