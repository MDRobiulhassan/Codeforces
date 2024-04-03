#include <iostream>
#include <algorithm>
#include <vector>
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

        int l = 0, j = 0;
        vi pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                pos.pb(i);
                j++;
            }
        }
        if (pos.size() == 1)
            cout << 1<<endl;
        else
        {
            sort(pos.begin(), pos.end());

            int ans = pos[(pos.size()-1)] - pos[0];
            cout << ans+1 << endl;
        }
    }

    return 0;
}