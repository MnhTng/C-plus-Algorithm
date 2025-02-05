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

        long l = 0, minGift = LONG_MAX, w = 0;
        for (int i = 0; i < n; i++)
        {
            w += a[i];
            while (w >= s)
            {
                minGift = min(minGift, i - l + 1);
                w -= a[l];
                l++;
            }
        }

        if (minGift == LONG_MAX)
            cout << "0" << endl;
        else
            cout << minGift << endl;
    }
    system("pause");
    return 0;
}