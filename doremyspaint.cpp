#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,j=0;
        cin>>n;
        int a[n],c[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            c[i]=a[i]+a[i+1];
        }
        for(int i=0;i<n-1;i++)
        {
            if(c[i]!=c[i+1])
                break;
            else
                j++;
        }
        if(j==n-1)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }

    return 0;
}