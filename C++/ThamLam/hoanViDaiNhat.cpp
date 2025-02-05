#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n + 1], pos[n + 1];
        vector<int> v;
        v.push_back(INT_MAX);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
            v.push_back(a[i]);
        }
        sort(v.begin(), v.end(), greater<int>());

        for (int i = 1; i <= n; i++)
        {
            if (!k)
                break;
            if (a[i] != v[i])
            {
                k--;
                int pos1 = pos[v[i]];
                pos[a[i]] = pos1;
                pos[a[pos1]] = i;
                swap(a[i], a[pos1]);
            }
        }

        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}