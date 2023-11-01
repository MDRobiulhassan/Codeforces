#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;

        vector<pair<int, int>> participants;

        for (int i = 0; i < n; i++)
        {
            int total_time = 0;
            for (int j = 0; j < m; j++)
            {
                int time;
                cin >> time;
                total_time += time;
            }
            participants.push_back({total_time, i + 1});
        }

        sort(participants.begin(), participants.end());

        int rudolf_place = 0;

        for (int i = 0; i < n; i++)
        {
            if (participants[i].second == 1)
            {
                rudolf_place = i + 1;
                break;
            }
        }

        cout << rudolf_place << endl;
    }

    return 0;
}
