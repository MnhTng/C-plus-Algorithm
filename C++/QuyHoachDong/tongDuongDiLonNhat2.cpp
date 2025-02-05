#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[105][105];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }

        int dp[105][105];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                dp[i][j] = max({dp[i - 1][j - 1], dp[i - 1][j], dp[i - 1][j + 1]}) + a[i][j];
        }

        int result = 0;
        for (int i = 1; i <= n; i++)
            result = max(result, dp[n][i]);

        cout << result << endl;
    }
    system("pause");
    return 0;
}