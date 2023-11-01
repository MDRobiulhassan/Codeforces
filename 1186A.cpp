#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (m >= n && k >= n)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}