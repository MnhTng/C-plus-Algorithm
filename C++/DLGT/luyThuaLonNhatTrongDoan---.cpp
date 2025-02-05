#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long double l, r;
        int result;
        cin >> l >> r;

        // Max 2^40 > 10^12
        for (int k = 1; k <= 40; k++)
        {
            // Lay can bac k cua 2 gia tri dau cuoi
            long double a = pow(l, 1.0 / k);
            long double b = pow(r, 1.0 / k);

            // Tim sai so voi can tren va can duoi cua 2 gia tri l, r
            // Neu sai so nho hon 1e-6, l lam tron xuong va nguoc lai r lam tron len
            long double checkleft = a - floor(a);
            long double checkright = b - ceil(b);

            if (abs(checkleft) <= 1e-6)
                a = floor(a);
            else
                a = ceil(a);
            if (abs(checkright) <= 1e-6)
                b = ceil(b);
            else
                b = floor(b);

            // Sau khi lam tron, neu r-l>=0 thi k thoa man L<=X^k<=R
            if (b - a >= 0)
            {
                result = k;
            }
        }
        cout << result << endl;
    }
    system("pause");
    return 0;
}