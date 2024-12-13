#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

bool isMagical(string &num)
{
    if (num[0] == '4')
        return false;

    if (num.find("444") != num.npos)
        return false;

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] != '1' && num[i] != '4')
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    string num = to_string(n);

    if (isMagical(num))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}