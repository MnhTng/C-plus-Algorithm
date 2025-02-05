#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n + 1][n + 1];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            a[x][y] = 1;
            a[y][x] = 1;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    system("pause");
    return 0;
}