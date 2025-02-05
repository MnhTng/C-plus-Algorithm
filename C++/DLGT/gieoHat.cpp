#include <bits/stdc++.h>
using namespace std;

int x[4] = {-1, 0, 0, 1};
int y[4] = {0, -1, 1, 0};
int result;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n][m];
        queue<pair<pair<int, int>, int>> q;
        int check = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];

                if (a[i][j] == 2)
                {
                    check = 0;

                    q.push({{i, j}, 0});
                }
            }
        }

        if (check)
            cout << "-1" << endl;
        else
        {
            result = 0;

            while (!q.empty())
            {
                pair<pair<int, int>, int> temp = q.front();
                q.pop();

                for (int i = 0; i < 4; i++)
                {
                    pair<pair<int, int>, int> u = temp;
                    u.first.first += x[i];
                    u.first.second += y[i];

                    int x = u.first.first;
                    int y = u.first.second;

                    if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1)
                    {
                        a[x][y] = 2;
                        q.push({{x, y}, u.second + 1});
                        result = max(result, u.second + 1);
                    }
                }
            }

            cout << result << endl;
        }
    }
    system("pause");
    return 0;
}