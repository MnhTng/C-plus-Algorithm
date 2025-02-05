#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int n, int k, int &check)
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;

    if (!i)
        check = 0;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[k + 1];
        for (int i = 1; i <= k; i++)
            a[i] = i;

        int check = 1;
        while (check)
        {
            for (int i = 1; i <= k; i++)
                cout << a[i];
            cout << " ";

            sinh(a, n, k, check);
        }
        cout << endl;
    }
    system("pause");
    return 0;
}