#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
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
        string s;
        cin >> s;

        int n = stoi(s);

        int count = -1, even = 0;

        if ((s[s.size() - 1] - '0') % 2 == 0)
            count = 0;
        else if (s[0] % 2 == 0)
            count = 1;
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    even++;
                    break;
                }
            }
            if (even > 0)
                count = 2;
        }

        cout << count << endl;
    }

}