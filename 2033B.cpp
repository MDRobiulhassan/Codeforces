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
        int a;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a;
                if (a < 0)
                    m[j - i] = min(m[j - i], a);
            }
        }

        int sum = 0;
        for (auto it : m)
            sum -= it.second;
        cout << sum << endl;
    }
}