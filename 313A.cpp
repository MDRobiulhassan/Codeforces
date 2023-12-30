// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int rem = n / 10;
//     int r = n % 10;
//     int rem2 = n / 100;
//     int rrem;
//     if (n > 0)
//         rrem = (rem2 * 100) + r;
//     else
//         rrem = (rem2 * 100) - r;

//     int result = max({n, rem, rrem});
//     cout << result << endl;

//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string m = s, n = s;

    string s1 = m.erase(m.size() - 1, 1);
    string s2 = n.erase(n.size() - 2, 1);

    int a = stoi(s);
    int n1 = stoi(s1);
    int n2 = stoi(s2);

    int result =max({a, n1, n2});

    cout << result << endl;

    return 0;
}