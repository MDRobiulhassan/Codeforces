#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s = "";

        int sum = n;
        for (int i = 2; i >= 0; i--)
        {
            if (sum > 27)
            {
                sum = sum - 26;
                s += 'z';
            }
            else
            {
                char ch = static_cast<char>(96 + (sum - i));
                s += ch;
                sum = sum - (sum - i);
            }
        }

        reverse(s.begin(),s.end());
        cout << s << endl;
    }

    return 0;
}