#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(k);
        int max_val = 0;
        int max_idx = -1;

        for (int i = 0; i < k; ++i)
        {
            cin >> a[i];
            if (a[i] > max_val)
            {
                max_val = a[i];
                max_idx = i;
            }
        }

        int split_operations = 0;
        int ones_count = 0;

        for (int i = 0; i < k; ++i)
        {
            if (i != max_idx)
            {
                if (a[i] > 1)
                {
                    split_operations += (a[i] - 1); // Splitting operations to make pieces of length 1
                    ones_count += (a[i] - 1);       // Number of ones created from this piece
                }
            }
        }

        int merge_operations = ones_count; // Merging each one with the max element
        int total_operations = split_operations + merge_operations;

        cout << total_operations << endl;
    }

    return 0;
}