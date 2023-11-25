#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int left = 2, right = n, lr = 0, rr = 0;

        while (left <= right)
        {
            lr = n % left;
            rr = n % right;
            if (lr == rr)
            {
                cout << left << " " << right << endl;
                break;
            }
            else if (lr < rr)
                left++;
            else
                right--;
        }
    }

    return 0;
}