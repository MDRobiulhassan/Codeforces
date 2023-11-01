#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string s1="abc",s2="acb",s3="bac",s4="cba";

    while(t--)
    {
        string s;
        getline(cin,s);

        if(s==s1||s==s2||s==s3||s==s4)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
}

