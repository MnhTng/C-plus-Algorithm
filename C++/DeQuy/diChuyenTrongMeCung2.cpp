#include <bits/stdc++.h>
using namespace std;

int row[4] = {1, 0, 0, -1};
int col[4] = {0, -1, 1, 0};
string act = "DLRU";

void sinh(int a[][100], int n, string s, int i, int j, int &check)
{
    if (i == n && j == n)
    {
        check = 0;
        cout << s << endl;
    }

    for (int k = 0; k < 4; k++)
    {
        if ((i <= n || j <= n) && a[i + row[k]][j + col[k]] == 1)
        {
            s += act[k];
            a[i + row[k]][j + col[k]] = 0;
            sinh(a, n, s, i + row[k], j + col[k], check);
            s.pop_back();
            a[i + row[k]][j + col[k]] = 1;
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
        int a[100][100];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }

        int check = 1;
        a[1][1] = 0;
        string s = "";
        sinh(a, n, s, 1, 1, check);

        if (check)
            cout << -1 << endl;
    }
    system("pause");
    return 0;
}