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

        int a[n], b[n];
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        sort(a, a + n, greater<int>());
        sort(b, b + n);

        long long result = 0;
        for (int i = 0; i < n; i++)
            result += a[i] * b[i];

        cout << result << endl;
    }
    system("pause");
    return 0;
}