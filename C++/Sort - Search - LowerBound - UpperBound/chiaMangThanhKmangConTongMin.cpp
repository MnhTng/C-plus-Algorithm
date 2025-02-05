#include <bits/stdc++.h>
using namespace std;

int check(int *a, int n, int k, int sum)
{
    int temp = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp + a[i] > sum)
        {
            count++;
            temp = a[i];
        }
        else
            temp += a[i];
    }
    if (temp > 0)
        count++;
    return count <= k;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;

    int l = *max_element(a, a + n), r = accumulate(a, a + n, 0);
    int result = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(a, n, k, mid))
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