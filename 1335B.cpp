#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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
        string s = "abcdefghijklmnopqrstuvwxyz", s1="";
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < b; i++)
        {
            s1 += s[i];
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            cout << s[j];
            j++;

            if (j == b)
                j = 0;
        }
        cout << endl;
    }

    return 0;
}