#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int visited[1005];
int parentNode[1005];

int DFS(int u)
{
    visited[u] = 1;

    for (int x : v[u])
    {
        if (!visited[x])
        {
            parentNode[x] = u;
            if (DFS(x))
                return 1;
        }
        else if (x != parentNode[u])
            return 1;
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
                if (DFS(i))
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