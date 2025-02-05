/*
* i: hang
* j: cot
* n: ban co nxn
    duong cheo xuoi: n + i - j
        ? i tang thi duong cheo tang
        ? j tang thi duong cheo giam
    duong cheo nguoc: i + j - 1
*/

#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int *pos, int *col, int *cheo1, int *cheo2, int &count, int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (col[j] == 0 && cheo1[n + i - j] == 0 && cheo2[i + j - 1] == 0)
        {
            pos[i] = j;
            col[j] = 1;
            cheo1[n + i - j] = 1;
            cheo2[i + j - 1] = 1;

            if (i == n)
                count++;

            //* In vi tri quan hau
            // for(int hang = 1; hang <= n; hang++){
            //     for(int cot = 1; cot <= n; cot++){
            //         if(pos[hang] == cot)
            //             cout << "Q";
            //         else
            //             cout << ".";
            //     }
            //     cout << endl;
            // }
            // cout << endl;

            else
                sinh(n, pos, col, cheo1, cheo2, count, i + 1);

            col[j] = 0;
            cheo1[n + i - j] = 0;
            cheo2[i + j - 1] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int pos[100], col[100], cheoXuoi[100], cheoNguoc[100];
        memset(col, 0, sizeof(col));
        memset(cheoXuoi, 0, sizeof(cheoXuoi));
        memset(cheoNguoc, 0, sizeof(cheoNguoc));
        int count = 0;

        sinh(n, pos, col, cheoXuoi, cheoNguoc, count, 1);

        cout << count << endl;
    }
    system("pause");
    return 0;
}