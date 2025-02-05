#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int n, int x)
{
    for (int i = 1; i >= 0; i--)
    {
        a[x] = i;
        if (x == n)
        {
            for (int j = 1; j <= n; j++)
                cout << a[j];
            cout << endl;
        }
        else
            sinh(a, n, x + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100];

        sinh(a, n, 1);
    }
    system("pause");
    return 0;
}