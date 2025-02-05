#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int *pos, int n, int k, int s, int sum, int index, int &count)
{
    if (index - 1 == k)
    {
        if (sum == s)
            count++;
    }
    else
    {
        for (int i = pos[index - 1] + 1; i <= n; i++)
        {
            if (sum + a[i] > s)
                break;
            else
            {
                pos[index] = i;
                sinh(a, pos, n, k, s, sum + a[i], index + 1, count);
            }
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

        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int pos[n + 1] = {};
        int count = 0;
        sinh(a, pos, n, k, s, 0, 1, count);

        cout << count << endl;
    }
    system("pause");
    return 0;
}