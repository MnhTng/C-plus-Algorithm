// c(n, k) = c(n - 1, k - 1) + c(n - 1, k)
#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void solve(int n, int k)
{
    int dp[n + 1][k + 1] = {};
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = 1;

        for (int j = 1; j <= k; j++)
            dp[i][j] = (dp[i - 1][j - 1] % mod + dp[i - 1][j] % mod) % mod;
    }

    cout << dp[n][k] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }
    system("pause");
    return 0;
}