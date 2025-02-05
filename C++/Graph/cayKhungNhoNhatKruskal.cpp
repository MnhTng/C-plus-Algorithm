#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int x, y, w;
};

int parentNode[1005], sz[1005];
vector<edge> v;

bool comp(edge a, edge b)
{
    if (a.w == b.w)
        return a.x < b.x;
    return a.w < b.w;
}

int find(int u)
{
    if (u == parentNode[u])
        return u;
    else
        return parentNode[u] == find(parentNode[u]);
}

int DSU(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x == y)
        return 0;

    if (sz[x] == sz[y])
    {
        if (x > y)
            swap(x, y);
    }
    else if (sz[x] < sz[y])
        swap(x, y);
    sz[x] += sz[y];
    parentNode[y] = x;
    return 1;
}

void kruskal(int n, int m)
{
    vector<edge> result;
    int length = 0;

    for (int i = 0; i < m; i++)
    {
        if (result.size() == n - 1)
            break;

        edge temp = v[i];
        if (DSU(temp.x, temp.y))
        {
            result.push_back(temp);
            length += temp.w;
        }
    }

    if (result.size() < n - 1)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        cout << length << endl;
        for (auto e : result)
            cout << e.x << " " << e.y << " " << e.w << endl;
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

        for (int i = 1; i <= n; i++)
        {
            parentNode[i] = i;
            sz[i] = 1;
        }

        for (int i = 0; i < m; i++)
        {
            int x, y, w;
            cin >> x >> y >> w;

            edge e = {x, y, w};
            v.push_back(e);
        }
        sort(v.begin(), v.end(), comp);

        kruskal(n, m);
    }
    system("pause");
    return 0;
}