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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            int l = i - 1, r = i + 1, sl = 0, sr = 0;

            while (l >= 0 && a[l] >= a[i])
            {
                sl++;
                l--;
            }
            while (r < n && a[r] >= a[i])
            {
                sr++;
                r++;
            }

            result = max(result, a[i] * (sr + sl + 1));
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}