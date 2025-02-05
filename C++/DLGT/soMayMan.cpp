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

        int check = 1;
        for (int i = 0; i <= n / 4; i++)
        {
            if ((n - i * 4) % 7 == 0)
            {
                check = 0;

                for (int j = 0; j < i; j++)
                    cout << 4;
                for (int j = 0; j < (n - i * 4) / 7; j++)
                    cout << 7;
                cout << endl;

                break;
            }
        }

        if (check)
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}