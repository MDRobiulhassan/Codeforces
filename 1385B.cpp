#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[2*n];
        int p[2*n];

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        int used[100] = {0};
        int j = 0;

        for (int i = 0; i < 2 * n; i++) {
            if (!used[a[i]]) {
                p[j] = a[i];
                j++;
                used[a[i]] = 1;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
