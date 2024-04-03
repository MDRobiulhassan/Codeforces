#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int num = 10;
        // vi a;
        // a.pb(10);
        // set<int> b;
        // b.insert(10);
        int count=1,sum=1;
        for (int i = 1; i < s.size(); i++)
        {   
            if(s[i]!=s[i-1])
                sum=1;
            else
                sum++;
            count=max(sum,count);
        }
        cout<<count+1<<endl;
    }

    return 0;
}