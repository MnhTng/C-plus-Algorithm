#include <bits/stdc++.h>
using namespace std;

int check(int *time, int n, int mid, int t)
{
    int sp = 0;
    for (int i = 0; i < n; i++)
        sp += mid / time[i];
    return sp >= t;
}

int main()
{
    int n, t;
    cin >> n >> t;
    int time[n];
    for (int &x : time)
        cin >> x;

    int l = 0, r = *min_element(time, time + n) * t;
    int result = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(time, n, mid, t))
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