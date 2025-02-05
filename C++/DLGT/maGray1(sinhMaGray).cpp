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

        // So luong ma gray thu n
        int sl = pow(2, n);

        string gray[10000];
        gray[1] = "0";
        gray[2] = "1";

        if (n > 1)
        {
            // Vi tri lay doi xung
            int divPos = 2;

            for (int i = 2; i <= n; i++)
            {
                int slNew = pow(2, i);

                for (int j = 1; j <= divPos; j++)
                {
                    gray[slNew - j + 1] = "1" + gray[j];
                    gray[j] = "0" + gray[j];
                }

                divPos = slNew;
            }
        }

        for (int i = 1; i <= sl; i++)
            cout << gray[i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}