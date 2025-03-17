#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

void subsequence(int i, string &s, string temp, int &count)
{
    if (i == s.size())
    {
        if (temp == "QAQ")
            count++; 
        return;
    }

    if (temp.size() < 3)
        subsequence(i + 1, s, temp + s[i], count);

    subsequence(i + 1, s, temp, count);
}

int main()
{
    string s;
    cin >> s;
    int count = 0;
    subsequence(0, s, "", count);
    cout << count << endl;
    return 0;
}