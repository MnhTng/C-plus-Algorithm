#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int visited[1005], parentNode[1005];

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int y : v[x])
        {
            if (!visited[y])
            {
                parentNode[y] = x;
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
        int n, m, s, d;
        cin >> n >> m >> s >> d;

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
            v[y].push_back(x);
        }

        // for (int i = 1; i <= n; i++)
        //     sort(v[i].begin(), v[i].end());

        memset(visited, 0, sizeof(visited));
        BFS(s);

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