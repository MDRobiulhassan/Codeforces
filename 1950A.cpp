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
    int t;
    cin >> t;
    tc
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
            cout << "STAIR";
        else if (a < b && b > c)
            cout << "PEAK";
        else
            cout << "NONE";
        cout << endl;
    }

    return 0;
}