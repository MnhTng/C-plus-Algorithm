#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);

        int result = INT_MAX;
        for (int i = 0; i < n - k; i++)
        {
            int temp = a[i + k - 1] - a[i];
            result = min(result, temp);
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}