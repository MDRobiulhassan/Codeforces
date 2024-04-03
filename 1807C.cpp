#include <iostream>
#include <algorithm>
#include <set>
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
        string s;
        cin >> s;
        set<char> c;
        if (n == 1)
            cout << "YES";
        else
        {
            for (int i = 0; i < n; i++)
            {
                c.insert(s[i]);
            }

            // for (auto it = c.begin(); it != c.end(); ++it)
            // {
            //     std::cout << *it;
            // }
            if (n > 1 && c.size() == 1)
                cout << "NO";
            else if (c.size() < n - c.size() || n - c.size() == 0 || n - c.size()==c.size())
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}