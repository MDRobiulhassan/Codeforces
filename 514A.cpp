#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
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
    string s;
    cin >> s;
    int n = s.size();
    l1n
    {
        if (s[i] > '4')
            s[i] = '9' - s[i] + '0';
    }

    if (s[0] == '0')
        s[0] = '9';
    cout << s << endl;
    return 0;
}