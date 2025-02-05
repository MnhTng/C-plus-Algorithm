#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // n : so thao tac them duong vao coc
        // q : so truy van kiem tra cac coc dat chuan
        int n, k, q;
        cin >> n >> k >> q;

        int d[200001] = {0};
        while(n--)
        {
            int l, r;
            cin >> l >> r;
            d[l]++;
            d[r + 1]--;
        }

        // Mang tim so luong coc dat chuan
        int f[200001] = {0};
        int count = 0;
        for (int i = 1; i <= 200000; i++)
        {
            d[i] += d[i - 1];

            if (d[i] >= k)
                count++;
            f[i] = count;
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