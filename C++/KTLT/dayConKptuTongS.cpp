#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int *pos, int &count, int f_index, int sum, int n, int k, int s)
{
    if (f_index - 1 == k)
    {
        if (sum == s)
            count++;
    }
    else
    {
        for (int i = pos[f_index - 1] + 1; i <= n; i++)
        {
            if (sum + a[i] <= s)
            {
                pos[f_index] = i;
                sinh(a, pos, count, f_index + 1, sum + a[i], n, k, s);
            }
            else
                break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;

        int a[n], pos[n + 1];
        pos[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[i] = 0;
        }

        int count = 0;
        int f_index = 1, sum = 0;
        sinh(a, pos, count, f_index, sum, n, k, s);

        cout << count << endl;
    }
    system("pause");
    return 0;
}