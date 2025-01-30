#include <bits/stdc++.h>
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

        if (n == 1)
            cout << 1;
        else
        {
            ll sum = 4, count = 2;
            while (sum < n)
            {
                sum++;
                sum *= 2;
                count++;
            }
            cout << count;
        }
        cout << endl;
    }

    return 0;
}