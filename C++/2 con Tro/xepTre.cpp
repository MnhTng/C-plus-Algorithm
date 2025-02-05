#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int p[n];
        for (int &x : p)
            cin >> x;
        sort(p, p + n);

        int l = 0, r = n - 1, result = 0;
        while (l <= r)
        {
            if (p[l] + p[r] > x)
                r--;
            else
            {
                l++;
                r--;
            }
            result++;
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}