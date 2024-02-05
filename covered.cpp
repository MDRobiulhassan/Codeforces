#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char ch = 'a';

        int count = 0;
        for (int i = 0; i < n * k; i++)
        {
            cout << ch;
            ch++;
            count++;
            if (count == k)
            {
                ch = 'a';
                count = 0;
            }
        }
        cout << endl;
    }

    return 0;
}