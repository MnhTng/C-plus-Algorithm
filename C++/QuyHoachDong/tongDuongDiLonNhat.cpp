#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[505][505];
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }

        int dp[505][505];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + a[i][j];
            }
        }

        cout << dp[m][n] << endl;
    }
    system("pause");
    return 0;
}