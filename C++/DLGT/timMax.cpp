#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);

        long long result = 0;
        for (long long i = 0; i < n; i++)
            result += (i * a[i]) % (long long)(1e9 + 7);

        cout << result << endl;
    }
    system("pause");
    return 0;
}