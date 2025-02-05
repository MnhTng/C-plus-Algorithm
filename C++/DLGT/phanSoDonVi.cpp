#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        while (b % a != 0)
        {
            int x = b / a;

            cout << "1/" << x + 1 << " + ";

            a = (x + 1) * a - b;
            b = (x + 1) * b;
        }

        cout << "1/" << b / a << endl;
    }
    system("pause");
    return 0;
}