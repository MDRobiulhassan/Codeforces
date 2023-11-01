#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int m;
    cin >> m;
    set<char> a;
    for (char c : s)
    {
        a.insert(c);
    }
    string s2(a.begin(), a.end());

    while (m--)
    {
        int f, t;
        cin >> f >> t;

        if (f >= 0 && f < s2.size() && t >= 0 && t < s2.size())
        {
            int distance = std::abs(s2[f] - s2[t]);
            cout << distance << std::endl;
        }
        else
            cout << 1 << std::endl;
    }
}
