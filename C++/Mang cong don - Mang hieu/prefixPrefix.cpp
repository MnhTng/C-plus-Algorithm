#include <bits/stdc++.h>
using namespace std;

int main()
{
    // m : so thao tac tang phan tu
    // k : so truy van lap lai thao tac
    int n, m, k;
    cin >> n >> m >> k;

    int a[n], d[100001] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int l[m], r[m], value[m];
    for (int i = 1; i <= m; i++)
        cin >> l[i] >> r[i] >> value[i];

    for (int i = 1; i <= k; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    int f[100001] = {0};
    for (int i = 1; i <= m; i++)
    {
        d[i] += d[i - 1];

        f[l[i]] += d[i] * value[i];
        f[r[i] + 1] -= d[i] * value[i];
    }

    for (int i = 1; i <= n; i++)
    {
        f[i] += f[i - 1];
        cout << a[i] + f[i] << " ";
    }
    cout << endl;
    system("pause");
}