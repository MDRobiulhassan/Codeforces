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

        int counttw = 0, counttr = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            counttw++;
        }

        while (n % 3 == 0)
        {
            n /= 3;
            counttr++;
        }

        if (n == 1 && counttw <= counttr)
            cout << 2 * counttr - counttw;
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}