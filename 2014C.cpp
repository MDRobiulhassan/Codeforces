#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        ll n;
        cin >> n; // Number of people
        vector<ll> a(n);
        ll sum = 0;
        ll max_wealth = 0;

        // Read wealth and calculate total wealth and max wealth
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            max_wealth = max(max_wealth, a[i]);
        }

        // If there's only one person, it's impossible for Robin Hood to appear
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        // Calculate the initial average and unhappy count
        ll unhappy_count = 0;
        double avg = static_cast<double>(sum) / n;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < avg)
            {
                unhappy_count++;
            }
        }

        // If already more than half are unhappy
        if (unhappy_count > n / 2)
        {
            cout << 0 << endl;
            continue;
        }

        // We need to find the minimum x such that the condition is satisfied
        ll left = 0, right = 1e9; // Arbitrarily large right bound
        ll result = -1;

        while (left <= right)
        {
            ll x = left + (right - left) / 2;
            double new_avg = static_cast<double>(sum + x) / n;
            ll new_unhappy_count = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] < new_avg)
                {
                    new_unhappy_count++;
                }
            }

            if (new_unhappy_count > n / 2)
            {
                result = x; // Found a valid x, try to find a smaller one
                right = x - 1;
            }
            else
            {
                left = x + 1; // Increase x
            }
        }

        // If no valid x was found, return -1
        if (result == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}
