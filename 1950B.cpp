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
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if ((i / 2 + j / 2) % 2 == 0)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
    }

    return 0;
}