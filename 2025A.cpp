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
        string s,q;
        cin>>s>>q;
        int n=s.size();
        int m=q.size();

        int i=0,count=0;
        while(i<n&&i<m)
        {
            if(s[i]==q[i])
                count++;
            else
                break;
            i++;
        }

        int ans=count+(n-count)+(m-count);
        if(count!=0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
