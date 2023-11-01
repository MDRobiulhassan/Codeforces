#include<iostream>
using namespace std;

int main()
{
    int t,h,m;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>h>>m;
        cout<<1440-(h*60+m)<<endl;
    }

    return 0;
}