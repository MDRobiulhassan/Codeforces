#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string s1;
    s1 += s[0];
    s.erase(0, 1);
    // cout<<s<<" "<<s1;
    int i = 1, j = 2;
    while (!s.empty())
    {
        if (s.size() % 2 == 0)
            s1 = s[0] + s1;
        else
            s1 += s[0];
        s.erase(0, 1);
    }
    cout << s1;

    return 0;
}