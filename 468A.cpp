#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0, h[n], a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i] >> a[i];
        for (int j = 0; j < i; ++j)
        {
            if (h[i] == a[j])
                count++;
            if (a[i] == h[j])
                count++;
        }
    }
    cout << count << endl;
    return 0;
}