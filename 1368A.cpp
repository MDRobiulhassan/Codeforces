#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,a,b,c,count=0,sum=0;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;
        while(sum<=c)
        {
            if(a>b)
            {
                b+=a;
                sum=b;
                count++;
            }

            else
            {
                a+=b;
                sum=a;
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
        sum=0;

    }

    return 0;
}
