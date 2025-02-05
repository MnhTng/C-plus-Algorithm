#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;

        map<int, int> mp;
        queue<pair<int, int>> q;
        q.push({s, 0});

        while (!q.empty())
        {
            pair<int, int> u = q.front();
            q.pop();

            if (u.first == d)
            {
                cout << u.second << endl;
                break;
            }

            if (u.first <= d && !mp[u.first * 2])
            {
                mp[u.first * 2] = 1;
                q.push({u.first * 2, u.second + 1});
            }
            if (u.first > 1 && !mp[u.first - 1])
            {
                mp[u.first - 1] = 1;
                q.push({u.first - 1, u.second + 1});
            }
        }
    }
    system("pause");
    return 0;
}