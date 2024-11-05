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
        int a[n], o = 0, e = 0;
        l1n
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                e++;
            else
                o++;
        }

        int count = 0;
        if (e > o)
        {
            l1n
            {
                if (a[i] % 2 != 0)
                    count++;
            }
        }
        else
        {
            l1n
            {
                if (a[i] % 2 == 0)
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}