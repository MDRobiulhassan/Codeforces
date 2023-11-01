#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n, x, pos = 1, count=2;
        cin >> n >> x;

        while(count<n)
        {
            count=count+x;
            pos++;
        }
        cout << pos << endl;
    }

    return 0;
}
