#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v[1000001];
int dis[1000001];

void dijkstra(int n, int s)
{
    for (int i = 0; i <= n; i++)
        dis[i] = INT_MAX;
    dis[s] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});

    while (!q.empty())
    {
        pair<int, int> temp = q.top();
        q.pop();
        int d = temp.first, u = temp.second;

        if (d > dis[u])
            continue;

        for (auto x : v[u])
        {
            if (dis[x.first] > dis[u] + x.second)
            {
                dis[x.first] = dis[u] + x.second;
                q.push({dis[x.first], x.first});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
            cout << i << ": NO" << endl;
        else
            cout << i << ": " << dis[i] << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s;
        cin >> n >> m >> s;

        for (int i = 0; i < m; i++)
        {
            int x, y, w;
            cin >> x >> y >> w;

            v[x].push_back({y, w});
            // v[y].push_back({x, w});
        }

        dijkstra(n, s);
    }
    system("pause");
    return 0;
}