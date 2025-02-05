#include <bits/stdc++.h>
using namespace std;

void sinh(int a[][100], int n, string s, int i, int j, int &check)
{
    if (i == n && j == n)
    {
        check = 0;
        cout << s << " ";
    }
    if (i + 1 <= n && a[i + 1][j] == 1)
    {
        s += "D";
        a[i + 1][j] = 0;
        sinh(a, n, s, i + 1, j, check);
        s.pop_back();
        a[i + 1][j] = 1;
    }
    if (j + 1 <= n && a[i][j + 1] == 1)
    {
        s += "R";
        a[i][j + 1] = 0;
        sinh(a, n, s, i, j + 1, check);
        s.pop_back();
        a[i][j + 1] = 1;
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
        string s = "";
        sinh(a, n, s, 1, 1, check);

        if (check)
            cout << -1 << endl;
        else
            cout << endl;
    }
    system("pause");
    return 0;
}