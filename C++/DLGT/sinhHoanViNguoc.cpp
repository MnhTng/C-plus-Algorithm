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
        for (int i = 0; i < n; i++)
            a[i] = n - i;

        do
        {
            for (int i = 0; i < n; i++)
                cout << a[i];
            cout << " ";
        } while (prev_permutation(a, a + n));

        cout << endl;
    }
    system("pause");
    return 0;
}