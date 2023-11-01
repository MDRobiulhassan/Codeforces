#include<iostream>
using namespace std;

int main()
{
    string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int y,w,max;
    cin>>y>>w;

    if(y>w)
        max=y;
    else
        max=w;

    cout<<probability[max];

    return 0;
}