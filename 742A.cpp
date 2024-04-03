#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int n;
    cin >> n;

    if (n == 0)
        cout << 1;
    else if (n % 4 == 0)
        cout << 6 << endl;
    else if (n % 4 == 1)
        cout << 8 << endl;
    else if (n % 4 == 2)
        cout << 4 << endl;
    else if (n % 4 == 3)
        cout << 2 << endl;

    return 0;
}