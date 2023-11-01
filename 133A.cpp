#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int count;
    char str[] = {'H', 'Q', '9', '+'}, p[100];
    cin >> p;

    for (int i = 0; i < strlen(p); i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (p[i] == str[j])
            {
                count++;
                break;
            }
        }
        if (count != 0)
            break;
    }
    if(count!=0)
        cout<<"YES";
    else    
        cout<<"NO";
    return 0;
}