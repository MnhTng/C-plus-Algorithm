#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, n;
        cin >> c >> n;

        int w[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> w[i];

        int dp[n + 1][c + 1] = {};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (w[i] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = max((dp[i - 1][j - w[i]] + w[i]), dp[i - 1][j]);
            }
        }

        cout << dp[n][c] << endl;
    }
    system("pause");
    return 0;
}