#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int dp[s.size() + 1][s.size() + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < s.size(); i++)
            dp[i][i] = 1;

        int result = 1;
        for (int i = 0; i < s.size(); i++)
        {
            int n = i;

            for (int j = 0; j < s.size() - i; j++)
            {
                if (i < 2)
                {
                    if (s[j] == s[n])
                        dp[j][n] = 1;
                }
                else
                {
                    if (s[j] == s[n] && dp[j + 1][n - 1])
                        dp[j][n] = 1;
                }

                if (dp[j][n])
                    result = max(result, i + 1);
                n++;
            }
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}