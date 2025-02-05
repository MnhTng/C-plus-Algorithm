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

        int result = a[0];
        for (int i = 1; i < n; i++)
            result += max(0, a[i] - a[i - 1]);

        cout << result << endl;
    }
    system("pause");
    return 0;
}