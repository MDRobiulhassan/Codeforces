#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prime;

    for (int i = 2; i <= n; i++)
    {
        int flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            prime.push_back(i);
    }

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int div = 0;
        for (int j = 0; j < prime.size(); j++)
        {
            if (i % prime[j] == 0)
                div++;
        }
        if (div == 2)
            count++;
    }

    cout << count << endl;
    return 0;
}
