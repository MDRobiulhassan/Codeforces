#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,a[4],j=0;
        cin>>n;

        if(n<10)
            cout<<n;
        else
        {
            for(int i=10;i<=n;i++)
            {
                while(i!=0)
                {
                    a[j]=i%10;
                    j++;
                    i=i/10;
                }
                sort(a,a+j);
                for(int i=0;i<j;i++)
                {
                    if(a[i]==a[j])
                        break;
                }
            }
        }
    }

    return 0;
}