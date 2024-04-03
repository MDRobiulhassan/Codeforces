#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // sort(s.begin(), s.end());
    string k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",
           o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    if (n == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < o.size(); j++)
            {
                if (s[i] == o[j])
                {
                    cout << k[j];
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < k.size(); j++)
            {
                if (s[i] == k[j])
                {
                    cout << o[j];
                    break;
                }
            }
        }
    }

    return 0;
}