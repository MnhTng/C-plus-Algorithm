#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int visited[1005];
vector<pair<int, int>> canh;

void DFS(int s, int d, int u)
{
    visited[u] = 1;

    for (int x : v[u])
    {
        if ((x == s && u == d) || (x == d && u == s))
            continue;
        if (!visited[x])
            DFS(s, d, x);
    }
}

int tplt(int s, int d, int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            count++;
            DFS(s, d, i);
        }
    }

    return count;
}

void canhCau(int s, int d, int n, int &result)
{
    int root = tplt(0, 0, n);
    memset(visited, 0, sizeof(visited));
    int count = tplt(s, d, n);

    if (root < count)
    {
        cout << s << " " << d << endl;
        result++;
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

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
            v[y].push_back(x);
            canh.push_back({x, y});
        }

        for (int i = 1; i <= n; i++)
            sort(v[i].begin(), v[i].end());

        int result = 0;
        for (pair<int, int> x : canh)
            canhCau(x.first, x.second, n, result);

        cout << result << endl;
    }
    system("pause");
    return 0;
}