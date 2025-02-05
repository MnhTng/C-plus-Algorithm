#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }

        int result[m];
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            auto ite = ms.upper_bound(x);

            if (ite == ms.begin())
                result[i] = -1;
            else
            {
                result[i] = *(--ite);
                ms.erase(ite);
            }
        }

        for (int i = 0; i < m; i++)
            cout << result[i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}