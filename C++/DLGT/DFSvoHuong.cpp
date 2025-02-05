#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int visited[1005];

void DFS(int s)
{
    cout << s << " ";
    visited[s] = 1;

    for (int x : v[s])
    {
        if (!visited[x])
            DFS(x);
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
            v[y].push_back(x);
        }

        for (int i = 1; i <= n; i++)
            sort(v[i].begin(), v[i].end());

        memset(visited, 0, sizeof(visited));
        DFS(s);
        cout << endl;
    }
    system("pause");
    return 0;
}