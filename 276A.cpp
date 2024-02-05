#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, k, f, t, j = 0, max ;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        if (t > k)
            j = f - (t - k);
        else
            j = f;
        if(i==0)
            max=j;
        if (j > max)
            max = j;
    }

    cout << max << endl;

    return 0;
}