#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int result = a[0];
        for (int i = 1; i < n; i++)
        {
            result = result ^ a[i];
        }
        for (int i = 1; i < n; i++)
        {
            result = result ^ a[i];
        }
        
    }
}
