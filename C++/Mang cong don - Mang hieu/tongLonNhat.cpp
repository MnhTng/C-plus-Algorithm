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

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int d[n];
        memset(d, 0, sizeof(d));
        // Tim mang hieu sau q truy van
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            d[l]++;
            d[r + 1]--;
        }

        // Tim mang ban dau sau khi thuc hien q truy van
        // ~ Tim mang tan suat truy van
        for (int i = 1; i < n; i++)
            d[i] += d[i - 1];

        sort(a, a + n, greater<int>());
        sort(d, d + n, greater<int>());

        long long result = 0;
        for (int i = 0; i < n; i++)
            result += d[i] * a[i];
        cout << result << endl;
    }
    system("pause");
}