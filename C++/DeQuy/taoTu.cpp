#include <bits/stdc++.h>
using namespace std;

int x[4] = {-1, 0, 0, 1};
int y[4] = {0, -1, 1, 0};

void sinh(char a[100][100], string s, string temp, int visited[100][100], int n, int m, int i, int j, int &check)
{
    if (temp == s)
    {
        check = 1;
        return;
    }

    for (int k = 0; k < 4; k++)
    {
        i += x[k], j += y[k];
        if (i >= 0 && i < n && j >= 0 && j < m && !visited[i][i])
        {
            visited[i][j] = 1;
            temp += a[i][j];

            if (temp == s)
            {
                check = 1;
                return;
            }
            else if (s.find(temp) != string::npos)
                sinh(a, s, temp, visited, n, m, i, j, check);

            visited[i][j] = 0;
            temp.pop_back();
        }
        i -= x[k], j -= y[k];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    char a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    string s;
    cin >> s;

    int visited[100][100], check = 0;
    string temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == s[0])
            {
                memset(visited, 0, sizeof(visited));
                temp = "";
                temp += a[i][j];
                visited[i][j] = 1;
                sinh(a, s, temp, visited, n, m, i, j, check);
                if (check)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
    }
    if (!check)
        cout << "NO" << endl;
    system("pause");
    return 0;
}