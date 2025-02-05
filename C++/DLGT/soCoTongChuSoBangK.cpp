#include <bits/stdc++.h>
using namespace std;

int dp[101][50001] = {};

void solve()
{
    // d[i][j] voi i la so chu so, j la tong cac chu so
    // d[i][j] += d[i - 1][j - (0, 9)]
    // d[0][j] = 0, d[i][0] = 0, d[1][j] = 1
    for (int i = 1; i <= 9; i++)
        dp[1][i] = 1;

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = j; k <= 50000; k++)
            {
                dp[i][k] += dp[i - 1][k - j];
                dp[i][k] %= (int)(1e9 + 7);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    solve();
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cout << dp[n][k] << endl;
    }
    system("pause");
    return 0;
}