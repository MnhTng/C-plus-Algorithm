#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int a[n + 1][n + 1] = {};

    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        s += ' ';

        int temp = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= '0' && s[j] <= '9')
                temp = temp * 10 + (s[j] - '0');
            else
            {
                a[i][temp] = 1;
                temp = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}