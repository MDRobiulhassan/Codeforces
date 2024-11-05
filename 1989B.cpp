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

        int maxlen = 0;
        for (int i = 0; i < b.size(); i++)
        {
            int ind = i;
            int len = 0;
            for (int j = 0; j < a.size(); j++)
            {
                if (b[ind] == a[j])
                {
                    ind++;
                    len++;
                }
                maxlen = max(maxlen, len);
            }
        }

        cout << a.size() + b.size() - maxlen << endl;
    }

    return 0;
}