#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin >> t;

    tc
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        int x = 0, y = 0;
        bool found = false;

        unordered_set<string> v;

        for (char m : s)
        {
            if (m == 'N')
                y++;
            else if (m == 'S')
                y--;
            else if (m == 'E')
                x++;
            else if (m == 'W')
                x--;

            if (x == a && y == b)
            {
                found = true;
                break;
            }
            v.insert(to_string(x) + "," + to_string(y));
        }

        if (found)
        {
            cout << "YES" << endl;
            continue;
        }

        int dx = x, dy = y;

        if (dx == 0 && dy == 0)
        {
            if (v.count(to_string(a) + "," + to_string(b)) > 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
        else
        {
            bool canReach = false;
            for (int k = 1; k <= 10000; k++)
            {
                int cx = dx * k, cy = dy * k;
                if (v.count(to_string(a - cx) + "," + to_string(b - cy)) > 0)
                {
                    canReach = true;
                    break;
                }
            }
            cout << (canReach ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
