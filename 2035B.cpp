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
        int n;
        cin >> n;

        if (n == 1 || n == 3)
            cout << -1;
        else if (n % 2 == 0)
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << 3;
            }
            cout << 66;
        }
        else
        {
            for (int i = 0; i < n - 5; i++)
            {
                cout << 3;
            }
            cout << 36366;
        }
        cout << endl;
    }

    return 0;
}