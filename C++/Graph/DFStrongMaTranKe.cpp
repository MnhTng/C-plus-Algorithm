#include <bits/stdc++.h>
using namespace std;

void DFS(int a[][1005], int *visited, int n, int u)
{
    cout << u << " ";
    visited[u] = 1;

    for (int i = 1; i <= n; i++){
        if(a[u][i] == 1){
            if(!visited[i])
                DFS(a, visited, n, i);
        }
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

        int a[n + 1][1005];
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            a[x][y] = 1;
            a[y][x] = 1;
        }

        int visited[n + 1];
        memset(visited, 0, sizeof(visited));
        DFS(a, visited, n, 1);
        cout << endl;
    }
    system("pause");
    return 0;
}