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
    // int t;
    // cin>>t;
    int n;
    cin >> n;
    int a[n];
    l1n
    {
        cin >> a[i];
    }
    int flag = 0;
    l1n
    {
        double k = (double)a[i] / 2;
        if ((a[i] % 2) != 0)
        {
            if (flag == 0)
            {
                a[i] = ceil(k);
                flag = 1;
            }
            else if (flag == 1)
            {
                a[i] = floor(k);
                flag = 0;
            }
        }
        else
            a[i] = a[i] / 2;
    }
    l1n
    {
        cout << a[i] << endl;
    }

    return 0;
}