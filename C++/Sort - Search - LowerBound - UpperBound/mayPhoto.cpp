#include <bits/stdc++.h>
using namespace std;

int check(int n, int x, int y, int time)
{
    time -= min(x, y);
    return time / x + time / y >= n - 1;
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int l = 0, r = min(x, y) * n;
    int result = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(n, x, y, mid))
        {
            result = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << result << endl;
    system("pause");
    return 0;
}