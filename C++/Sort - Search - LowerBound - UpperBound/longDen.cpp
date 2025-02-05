#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        int longDen[n];
        for (int &x : longDen)
            cin >> x;
        sort(longDen, longDen + n);

        double d = max(longDen[0], l - longDen[n - 1]);
        for (int i = 1; i < n; i++)
            d = max(d, (longDen[i] - longDen[i - 1]) / 2.0);

        cout << fixed << setprecision(3) << d << endl;
    }
    system("pause");
    return 0;
}