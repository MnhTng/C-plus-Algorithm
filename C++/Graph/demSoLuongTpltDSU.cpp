#include <bits/stdc++.h>
using namespace std;

int parentNode[1005], sz[1005];

int find(int u)
{
    if (u == parentNode[u])
        return u;
    else
        return parentNode[u] == find(parentNode[u]);
}

void DSU(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x == y)
        return;

    if(sz[x] == sz[y]){
        if(x > y)
            swap(x, y);
    }
    else if (sz[x] < sz[y])
        swap(x, y);
    sz[x] += sz[y];
    parentNode[y] = x;
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
            int x, y;
            cin >> x >> y;

            DSU(x, y);
        }

        int result = 0;
        for (int i = 1; i <= n; i++)
        {
            cout << i << " " << parentNode[i] << endl;
            if (i == parentNode[i])
                result++;
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}