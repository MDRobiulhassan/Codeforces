#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (min(n,m) % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    cout << endl;

    return 0;
}