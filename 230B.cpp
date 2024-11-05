#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

const ll N = 1e12;
vector<bool> isPrime(N + 1, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

bool Divisors(ll num)
{
    ll root = sqrt(num);
    return root * root == num && isPrime[root];
}

int main()
{
    sieve();
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++)
    {
        if (Divisors(a[i]))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}