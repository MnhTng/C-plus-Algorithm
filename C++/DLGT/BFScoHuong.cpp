#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int visited[1005];

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";

        for (int y : v[x])
        {
            if (!visited[y])
            {
                q.push(y);
                visited[y] = 1;
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
        int n, m, s;
        cin >> n >> m >> s;

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
        }

        // for (int i = 1; i <= n; i++)
        //     sort(v[i].begin(), v[i].end());

        memset(visited, 0, sizeof(visited));
        BFS(s);
        cout << endl;
    }
    system("pause");
    return 0;
}