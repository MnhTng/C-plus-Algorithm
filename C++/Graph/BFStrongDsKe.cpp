#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int> v[1005], int *visited, int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";

        for (int i : v[x])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
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

        vector<int> v[n + 1];
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
            v[y].push_back(x);
        }

        for (int i = 1; i <= n; i++)
            sort(v[i].begin(), v[i].end());

        int visited[n + 1];
        memset(visited, 0, sizeof(visited));
        BFS(v, visited, 1);
        cout << endl;
    }
    system("pause");
    return 0;
}