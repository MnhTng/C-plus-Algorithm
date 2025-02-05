#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int visited[1005];
int parentNode[1005];

int BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int y : v[x])
        {
            if (!visited[y])
            {
                q.push(y);
                visited[y] = 1;
                parentNode[y] = x;
            }
            else if (y != parentNode[x])
                return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
            v[y].push_back(x);
        }

        for (int i = 1; i <= n; i++)
            sort(v[i].begin(), v[i].end());

        memset(visited, 0, sizeof(visited));

        int check = 1;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                if (BFS(i))
                {
                    check = 0;
                    cout << "YES" << endl;
                    break;
                }
            }
        }

        if (check)
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}