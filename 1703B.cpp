#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        int n, point = 2;
        cin >> n;
        cin.ignore();
        getline(cin,a);
        sort(a.begin(),a.end());

        for(int i=1;i<a.size();i++)
        {
            if(a[i]!=a[i-1])
                point+=2;
            else
                point+=1;
        }
        cout << point << endl;
    }

    return 0;
}
