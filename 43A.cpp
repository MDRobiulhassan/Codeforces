#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    sort(s, s + n);
    string s1 = s[0], s2 = s[n - 1];
    int s1_count = 0, s2_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s1)
            s1_count++;
        else
            s2_count++;
    }

    if (s1_count > s2_count)
        cout << s[0];
    else
        cout << s[n - 1];
    cout << endl;
    
    return 0;
}