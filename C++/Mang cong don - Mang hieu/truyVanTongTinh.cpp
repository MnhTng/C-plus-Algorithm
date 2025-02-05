#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n], f[n];

        for (int &x : a)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            if (!i)
                f[i] = a[i];
            else
                f[i] = f[i - 1] + a[i];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << f[r] - f[l - 1] << endl;
        }
    }
    system("pause");
}