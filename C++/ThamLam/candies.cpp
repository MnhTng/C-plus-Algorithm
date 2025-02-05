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
        int a[n], candy[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            candy[i] = 1;
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
                candy[i] = candy[i - 1] + 1;
            else
                candy[i] = 1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            int temp = candy[i];
            if (a[i] > a[i + 1])
                temp = candy[i + 1] + 1;
            candy[i] = max(temp, candy[i]);
        }

        long long result = accumulate(candy, candy + n, 0);
        cout << result << endl;
    }
    system("pause");
    return 0;
}