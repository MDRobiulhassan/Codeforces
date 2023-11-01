#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("cls");

    int n, i, s = 0, d = 0;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int left = 0, right = n - 1;
    i = 1;
    while (left <= right)
    {
        if (i % 2 != 0)
        {
            if (a[left] >= a[right])
                s = s + a[left++];
            else
                s = s + a[right--];
        }
        else
        {
            if (a[left] >= a[right])
                d = d + a[left++];
            else
                d = d + a[right--];
        }
        i++;
    }
    cout << s << " " << d;
}
