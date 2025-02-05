#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);

        long long even = 0, odd = 0;
        for (int i = 0; i < n; i += 2)
            even = even * 10 + a[i];
        for (int i = 1; i < n; i += 2)
            odd = odd * 10 + a[i];

        cout << even + odd << endl;
    }
    system("pause");
    return 0;
}