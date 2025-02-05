#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v[n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;

            if (x)
                v[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";

        for (int x : v[i])
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}