#include <iostream>
#include <vector>
#include <set>
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
        vector<int> a(n);
        set<int> unique_elements;

        // Read the input and fill the set with unique elements
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            unique_elements.insert(a[i]);
        }

        // Convert the set to a vector
        vector<int> result(unique_elements.begin(), unique_elements.end());

        // Sort the result in descending order
        sort(result.rbegin(), result.rend());

        // Output the result
        cout << result.size() << endl;
        for (int x : result)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
