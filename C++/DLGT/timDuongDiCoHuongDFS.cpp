#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int visited[1005], parentNode[1005];

void DFS(int s)
{
    visited[s] = 1;

    for (int x : v[s])
    {
        if (!visited[x])
        {
            parentNode[x] = s;
            DFS(x);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s, d;
        cin >> n >> m >> s >> d;

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
        }

        // for (int i = 1; i <= n; i++)
        //     sort(v[i].begin(), v[i].end());

        memset(visited, 0, sizeof(visited));
        DFS(s);

        if (!visited[d])
            cout << "-1" << endl;
        else
        {
            vector<int> result;
            result.push_back(d);

            while (parentNode[d] != s)
            {
                d = parentNode[d];
                result.push_back(d);
            }
            result.push_back(s);

            reverse(result.begin(), result.end());
            for (int x : result)
                cout << x << " ";
            cout << endl;
        }
    }
    system("pause");
    return 0;
}