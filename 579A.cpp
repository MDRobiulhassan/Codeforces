#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int x;
    cin >> x;

    int count = 0;
    while (x > 1)
    {
        if (x % 2 == 0)
            x /= 2;
        else
        {
            x -= 1;
            count++;
        }
    }

    cout << count + 1 << endl;

    return 0;
}