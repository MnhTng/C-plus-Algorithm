#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long h[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    while (q--)
    {
        int x;
        cin >> x;
        int count = 0;

        while (1)
        {
            int l = 0, r = n + 1;
            for (int i = x - 1; i >= 1; i--)
            {
                if (h[i] > h[x])
                {
                    l = i;
                    break;
                }
            }
            for (int i = x + 1; i <= n; i++)
            {
                if (h[i] > h[x])
                {
                    r = i;
                    break;
                }
            }

            if (l == 0 && r == n + 1)
                break;
            else
            {
                if (l == 0)
                    x = r;
                else if (r == n + 1)
                    x = l;
                else
                    x = min(l, r);
                count++;
            }
        }

        cout << count << endl;
    }
    system("pause");
    return 0;
}