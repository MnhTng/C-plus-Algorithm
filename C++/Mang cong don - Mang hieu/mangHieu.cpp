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
        int a[n], f[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(!i)
                f[i] = a[i];
            else
                f[i] = a[i] - a[i - 1];
        }

        for (int x : f)
            cout << x << " ";
        cout << endl;
    }
    system("pause");
}