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
        for(int i = 1; i <= n; i++){
            dp[0][i] = INT_MIN;
            dp[n + 1][i] = INT_MIN;
        }
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                dp[j][i] = max({dp[j - 1][i - 1], dp[j][i - 1], dp[j + 1][i - 1]}) + a[j][i];
        }

        int result = INT_MIN;
        for (int i = 1; i <= n; i++)
            result = max(result, dp[i][n]);

        cout << result << endl;
    }
    system("pause");
    return 0;
}