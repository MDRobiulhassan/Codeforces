#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long long product=1;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]=a[0]+1;
        for(int i=0; i<n; i++)
        {
            product=product*a[i];
        }
        cout<<product<<endl;

    }
}
