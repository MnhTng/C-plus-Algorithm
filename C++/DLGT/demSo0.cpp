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
        for (int &x : a)
            cin >> x;

        auto ite = lower_bound(a, a + n, 1);
        cout << ite - a << endl;
    }
    system("pause");
    return 0;
}