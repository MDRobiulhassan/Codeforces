#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s = "meow", s2;
        cin >> s2;
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

        s2.erase(unique(s2.begin(), s2.end()), s2.end());

        if (s2 == s)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}

// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, j = 0, count = 0;
//         cin >> n;
//         string s = "meow", s2;
//         cin >> s2;
//         transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

//         for (int i = 0; i < n; i++)
//         {
//             if (s2[i] == s[j])
//             {
//                 j++;
//                 count++;
//             }
//         }

//         if (count == 4 && s2[n-1]=='w')
//             cout << "YES";
//         else
//             cout << "NO";
//         cout << endl;
//     }

//     return 0;
// }
