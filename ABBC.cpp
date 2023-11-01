#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {

        string s;
        getline(cin,s);
        int b=0;
        for(int i=0; i<s.size(); i++)
        {
            if (s[i]=='B')
                b++;
        }
        if(b==0)
            cout<<0;
        else
            cout<<s.size()-b;
        cout<<endl;
    }
}


