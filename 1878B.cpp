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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = n;
        if (a % 2 == 0)
            a += 1;
        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }

    return 0;
}