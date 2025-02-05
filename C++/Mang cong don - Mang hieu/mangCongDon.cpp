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

        int initial = 1, f[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (initial)
            {
                f[i] = x;
                initial = 0;
            }
            else
            {
                f[i] = f[i - 1] + x;
            }
        }
        for (int x : f)
            cout << x << " ";
        cout << endl;
    }
    system("pause");
}