#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long sum=a+b;

        if(sum%2==0)
            cout<<"Bob";
        else
            cout<<"Alice";
        cout<<endl;
    }

    return 0;
}