#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> x, pair<int, int> y)
{
    if (x.first == y.first)
        return x.second < y.second;
    return x.first < y.first;
}

void DFS(vector<pair<int, int>> v, int *visited, int u)
{
    cout << u << " ";
    visited[u] = 1;

    for (pair<int, int> x : v)
    {
        if (x.first == u)
        {
            if (!visited[x.second])
                DFS(v, visited, x.second);
        }
        if (x.second == u)
        {
            if (!visited[x.first])
                DFS(v, visited, x.first);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v.push_back({x, y});
        }
        sort(v.begin(), v.end(), comp);

        int visited[n + 1];
        memset(visited, 0, sizeof(visited));
        DFS(v, visited, 1);
        cout << endl;
    }
    system("pause");
    return 0;
}