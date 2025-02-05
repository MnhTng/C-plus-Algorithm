#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, k;
        cin >> n >> m >> k;

        long long a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);

        vector<int> v(n + m);
        merge(a, a + n, b, b + m, v.begin());

        cout << v[k - 1] << endl;
    }
    system("pause");
    return 0;
}