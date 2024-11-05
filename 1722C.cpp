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
        map<string, int> m;
        int n;
        cin >> n;
        string s[4][1000];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                m[s[i][j]]++;
            }
        }

        int po = 0, pt = 0, ptr = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    if (m[s[i][j]] == 1)
                        po += 3;
                    else if (m[s[i][j]] == 2)
                        po += 1;
                }
                else if (i == 1)
                {
                    if (m[s[i][j]] == 1)
                        pt += 3;
                    else if (m[s[i][j]] == 2)
                        pt += 1;
                }
                else
                {
                    if (m[s[i][j]] == 1)
                        ptr += 3;
                    else if (m[s[i][j]] == 2)
                        ptr += 1;
                }
            }
        }

        cout << po << " " << pt << " " << ptr;
        cout << endl;
    }

    return 0;
}