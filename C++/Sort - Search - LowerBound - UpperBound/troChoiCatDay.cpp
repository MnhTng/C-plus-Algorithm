#include <bits/stdc++.h>
using namespace std;

int check(int *a, int n, int k, double length)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        count += (int)(a[i] / length);
    return count >= k;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;

    double l = 0, r = 9e18;
    double result = 0;
    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2;
        if (check(a, n, k, mid))
        {
            result = mid;
            l = mid;
        }
        else
            r = mid;
    }

    cout << fixed << setprecision(5) << result << endl;
    system("pause");
    return 0;
}