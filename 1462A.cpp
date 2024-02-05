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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int left = 0, right = n - 1,i=0;
        while(left<=right)
        {
            if (i % 2 == 0)
            {
                b[i] = a[left];
                left++;
            }
            else
            {
                b[i] = a[right];
                right--;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}