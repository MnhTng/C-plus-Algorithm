#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int n, int &check)
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }

    if (!i)
        check = 0;
    else
        a[i] = 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n + 1];
        memset(a, 0, sizeof(a));

        int check = 1;
        while (check)
        {
            for (int i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;

            sinh(a, n, check);
        }
    }
    system("pause");
    return 0;
}