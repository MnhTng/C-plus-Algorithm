#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, s;
        cin >> n >> s;

        int a[n];
        for (int &x : a)
            cin >> x;

        long l = 0, maxGift = 0, w = 0;
        for (int i = 0; i < n; i++)
        {
            w += a[i];
            while (w > s)
            {
                w -= a[l];
                l++;
            }
            maxGift = max(maxGift, i - l + 1);
        }

        cout << maxGift << endl;
    }
    system("pause");
    return 0;
}