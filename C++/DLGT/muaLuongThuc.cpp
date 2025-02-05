#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // n: so luong thuc toi da co the mua trong 1 ngay
        // s: so ngay can song sot
        // m: so luong thuc can tieu thu de song sot trong 1 ngay
        int n, s, m;
        cin >> n >> s >> m;

        if ((s * m) > (s - s / 7) * n)
            cout << "-1" << endl;
        else
        {
            for (int i = 1; i <= s - s / 7; i++)
            {
                if (n * i >= s * m)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    system("pause");
    return 0;
}