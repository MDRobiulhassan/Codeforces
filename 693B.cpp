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
        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                count1++;
            else if (x == 2)
                count2++;
        }

        if (count1 % 2 == 0 && (count2 % 2 == 0 || count1 >= 2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}