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
        int n;
        cin >> n;
        int op = n / 2 + n % 2;
        int l = 1, r = n * 3;
        cout << op << endl;
        for (int i = 0; i < op; i++)
        {
            cout << l << " " << r << endl;
            l+=3, r-=3;
        }
    }

    return 0;
}