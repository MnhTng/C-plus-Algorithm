#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);

        auto ite = upper_bound(a, a + n, x);
        if (ite == a)
            cout << "-1" << endl;
        else
            cout << ite - a << endl;
    }
    system("pause");
    return 0;
}