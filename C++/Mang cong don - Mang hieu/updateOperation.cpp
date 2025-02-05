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

        int a[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (!i)
                d[i] = a[i];
            else
                d[i] = a[i] - a[i - 1];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            d[l] += k;
            d[r + 1] -= k;

            int root[n];
            for (int i = 0; i < n; i++)
            {
                if (!i)
                    root[i] = d[i];
                else
                    root[i] = root[i - 1] + d[i];
                cout << root[i] << " ";
            }

            d[l] -= k;
            d[r + 1] += k;
            cout << endl;
        }
    }
    system("pause");
}