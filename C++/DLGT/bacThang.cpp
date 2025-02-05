#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k)
{
    long long dp[n + 1] = {};
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j < 0)
                break;

            dp[i] = (dp[i] + dp[i - j]) % (long long)(1e9 + 7);
        }
    }

    cout << dp[n] << endl;
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