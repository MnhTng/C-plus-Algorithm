#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int n, int k, int x)
{
    for (int i = 1; i <= n; i++)
    {
        a[x] = i;
        if (x == k)
        {
            for (int i = 1; i <= k; i++)
                cout << a[i];
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