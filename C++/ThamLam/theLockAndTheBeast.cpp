/*
    x: 5, x chia het 3
    y: 3, y chia het 5
    x + y = n <=> 3a + 5b = n
*/

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
        for (int i = 0; i <= n / 3; i++)
        {
            int temp = n - 3 * i;
            if (temp % 5 == 0)
            {
                check = 0;

                for (int j = 0; j < 3 * i; j++)
                    cout << '5';
                for (int k = 0; k < temp; k++)
                    cout << '3';
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