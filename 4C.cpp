#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <map>
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
    map<string, int> m;
    int n;
    cin >> n;

    l1n
    {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] == 1)
            cout << "OK" << endl;
        else
            cout << s << m[s] - 1 << endl;
    }

    return 0;
}