#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

const int N = 1e7;
vector<bool> isPrime(N, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    sieve();

    tc
    {
        ll n;
        cin >> n;

        ll a = 1, b = n;
        int count = 0;

        for (int i = 2; i <= n; i++)
        {
            if (isPrime[i])
                count += (n / i);
        }

        cout << count << '\n';
    }

    return 0;
}