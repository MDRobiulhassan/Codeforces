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
        int h[26] = {0}, count = 0;
        char s[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> s[i];
            h[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (h[i] > 0)
                count++;
        }
        cout << count - 1<<endl;
    }

    return 0;
}