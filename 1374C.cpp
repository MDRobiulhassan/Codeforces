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

        int count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                count++;
            else if (s[i] == ')')
            {
                count--;
                if (count < 0)
                {
                    count = 0;
                    ans++;
                }
            }
        }
        cout << ans<< endl;
    }

    return 0;
}