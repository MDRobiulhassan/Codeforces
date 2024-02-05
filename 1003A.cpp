#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,b;
    cin >> n;

    const int max = 100;
    int a[max + 1] = {0};

    for (int i = 0; i < n; i++) {
        cin >> b;
        ++a[b];
    }

    cout << *max_element(a, a + max + 1) << endl;

    return 0;
}
