#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int c[100][100], int *pos, int *visited, vector<int> &v, int cost, int &result, int cmin, int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (visited[j] == 0)
        {
            visited[j] = 1;
            pos[i] = j;
            cost += c[pos[i - 1]][pos[i]];

            if (i == n)
            {
                if (result > cost + c[pos[i]][1])
                {
                    result = cost + c[pos[i]][1];

                    v.clear();
                    for (int i = 1; i <= n; i++)
                        v.push_back(pos[i]);
                    v.push_back(pos[1]);
                }
            }
            else if (cost + (n - i + 1) * cmin < result)
                sinh(n, c, pos, visited, v, cost, result, cmin, i + 1);

            visited[j] = 0;
            cost -= c[pos[i - 1]][pos[i]];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c[100][100];
        int cmin = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> c[i][j];

                if (c[i][j] != 0 && cmin > c[i][j])
                    cmin = c[i][j];
            }
        }

        int pos[100], visited[100], cost = 0, result = INT_MAX;
        vector<int> v(n);
        pos[1] = 1;
        memset(visited, 0, sizeof(visited));
        visited[1] = 1;

        sinh(n, c, pos, visited, v, cost, result, cmin, 2);

        cout << result << endl;
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}