#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *a, int n, int k, int l, int r)
{
    if (l > r)
        return 0;

    int mid = (l + r) / 2;

    if (k == a[mid])
        return mid;
    if (mid > k)
        return binarySearch(a, n, k, l, mid - 1);
    else
        return binarySearch(a, n, k, mid + 1, r);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        if (binarySearch(a, n, k, 1, n))
            cout << binarySearch(a, n, k, 1, n) << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}