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
        vi a(n);

        for (int i = 0; i < n; i++)
        {
            a[i]=i+1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        for (int i = 0; i < n ; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}