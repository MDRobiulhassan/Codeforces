#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string trace;
        for (int i = 0; i < n; i++)
        {
            char ch = 'a';
            int a;
            cin >> a;
            if (a == 0)
                trace += ch++;
            else
                trace += trace[i - 1];
        }

        cout << trace << endl;
    }
    return 0;
}