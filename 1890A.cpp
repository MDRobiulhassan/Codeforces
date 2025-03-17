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

        const int s = 1e5 + 10;
        int h[s]={0}, mx = 0;
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            mx = max(mx, in);
            h[in]++;
        }
        if (n == 2)
            cout << "YES";
        else
        {
            int count = 0;
            vector<int> ans;
            for (int i = 1; i <= mx; i++)
            {
                if (h[i] > 0)
                {
                    count++;
                    ans.pb(i);
                }
            }

            if (count == 1)
                cout << "YES";
            else if (count == 2)
            {
                if (h[ans[0]] == n / 2 || h[ans[1]] == n / 2)
                    cout << "YES";
                else
                    cout<<"NO";
            }
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}