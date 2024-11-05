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
        int n, m;
        cin >> n >> m;
        if (n >= m && (n%2)==(m%2))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}