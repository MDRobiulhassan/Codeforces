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
    // int t;
    // cin>>t;
    int h[26] = {0};
    int n;
    cin >> n;
    string s, s1, s2;
    cin >> s;

    int count = 0, j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            h[s[i] - 'a']++;
        }
        else
        {
            
            if (h[tolower(s[i]) - 'a'] != 0)
                h[tolower(s[i]) - 'a']--;
            else
                count++;
            j++;
        }
    }

    cout << count << endl;

    return 0;
}