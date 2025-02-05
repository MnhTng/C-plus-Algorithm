#include <bits/stdc++.h>
using namespace std;

void DFS(vector<int> v[1005], int *visited, int *ID, int &count, int u)
{
    visited[u] = 1;
    ID[u] = count;

    for (int x : v[u])
    {
        if (!visited[x])
            DFS(v, visited, ID, count, x);
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

        int ID[1005];
        int count = 0;
        int visited[n + 1];
        memset(visited, 0, sizeof(visited));
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                count++;
                DFS(v, visited, ID, count, i);
            }
        }

        int q;
        cin >> q;
        while (q--)
        {
            int s, d;
            cin >> s >> d;

            if (ID[s] == ID[d])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}