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

int main()
{
    int t;
    cin >> t;
    tc
    {
        string s1, s2;
        cin >> s1 >> s2;

        string s3 = s1;
        s1[0] = s2[0];
        s2[0] = s3[0];

        cout << s1 << " " << s2 << endl;
    }

    return 0;
}