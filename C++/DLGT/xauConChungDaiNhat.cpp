#include <bits/stdc++.h>
using namespace std;

void solve(string s1, string s2)
{
    int dp[s1.size() + 1][s2.size() + 1] = {};

    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }

    cout << dp[s1.size()][s2.size()] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        solve(s1, s2);
    }
    system("pause");
    return 0;
}