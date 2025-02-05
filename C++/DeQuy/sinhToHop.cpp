#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int n, int k, int x)
{
    for (int i = a[x - 1] + 1; i <= n - k + x; i++)
    {
        a[x] = i;
        if (x == k)
        {
            for (int j = 1; j <= k; j++)
                cout << a[j];
            cout << endl;
        }
        else
            sinh(a, n, k, x + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100];
        memset(a, 0, sizeof(a));

        sinh(a, n, k, 1);
    }
    system("pause");
    return 0;
}