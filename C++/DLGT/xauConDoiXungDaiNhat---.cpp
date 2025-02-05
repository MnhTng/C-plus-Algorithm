#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];

void solve(string s)
{
    int result = 1;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for (int i = 1; i < s.size(); i++)
    {
        for (int j = 0; j < s.size() - i; j++)
        {
            if (s[j] == s[j + i] && (a[j + 1][j + i - 1] || j + 1 > j + i - 1))
            {
                a[j][j + i] = a[j + 1][j + i - 1] + 2;

                result = a[j][j + i];
            }
        }
    }

    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        solve(s);
    }
    system("pause");
    return 0;
}