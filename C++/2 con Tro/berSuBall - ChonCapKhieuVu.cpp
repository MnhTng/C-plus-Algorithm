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

        int nam[n], nu[m];
        for (int &x : nam)
            cin >> x;
        for (int &x : nu)
            cin >> x;
        sort(nam, nam + n);
        sort(nu, nu + m);

        int ptr1 = 0, ptr2 = 0, result = 0;
        while (ptr1 < n && ptr2 < m)
        {
            if (abs(nam[ptr1] - nu[ptr2]) <= 1)
            {
                result++;
                ptr1++;
                ptr2++;
            }
            else if (nam[ptr1] > nu[ptr2])
                ptr2++;
            else
                ptr1++;
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}