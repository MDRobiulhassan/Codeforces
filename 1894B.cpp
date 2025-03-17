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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n, 1);
        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }

        vector<int> nums;
        for (auto &p : pos)
        {
            if (p.second.size() >= 2)
                nums.push_back(p.first);
        }

        if (nums.size() < 2)
        {
            cout << -1 << endl;
            continue;
        }

        sort(nums.begin(), nums.end());
        int num1 = nums[0], num2 = nums[1];

        b[pos[num1][0]] = 1;
        b[pos[num1][1]] = 2;
        b[pos[num2][0]] = 2;
        b[pos[num2][1]] = 3;

        for (int x : b)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
