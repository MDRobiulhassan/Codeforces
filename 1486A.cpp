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
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0, m = 0;
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            m += i;
            sum += a[i];
            if (sum < m)
            {
                cout << "NO";
                flag=true;
                break;
            }
        }
        if(!flag)
            cout << "YES";
        cout << endl;
    }

}