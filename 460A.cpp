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

int main()
{
    vi a(101);
    int n, m;
    cin >> n >> m;
    if (n == m)
        cout << n + 1 << endl;
    else if (m > n)
        cout << n << endl;
    else
    {
        int s = 0;
        s = n + n / (m - 1);
        if (n % (m - 1) == 0)
            s -= 1;
        cout << s << endl;
    }

    return 0;
}