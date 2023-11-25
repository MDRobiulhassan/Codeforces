#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], sum = 0, count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int avg = sum / n;
        sort(a,a+n);
        for (int i = n-1; i >= 0; i--)
        {
            if (a[i] > avg)
                count++;
            else
                break;
        }
        for (int i = n-1; i >= 0; i--)
        {
           cout<<a[i]<<" ";
        }
        cout<<avg<<endl;
        cout << count << endl;
    }

    return 0;
}