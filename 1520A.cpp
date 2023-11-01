#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k=0;
        cin >> n;
        string str,str2;
        cin >> str;
        char ch=s[0];

        for(int i=0;i<n;i++)
        {
            if(str[i]!=ch)
            {
                str2[k]=str[i];
                ch=str[i];
                k++;
            }
            for(int j=0;j<n;j++)
            {
                if(str[i]==str2[j])
                {
                    count<<"NO"<<endl;
                }
            }
        }
    }

    return 0;
}