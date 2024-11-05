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
        string a, b;
        cin >> a >> b;

        int len = a.size() + b.size();
        int count = 0;
        for (int i = 0; i < b.size(); i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (b[i] == a[j])
                {
                    count++;
                    break;
                }
            }
        }

        if (count > a.size())
            count = 1;

        cout << len - count << endl;
    }

    return 0;
}