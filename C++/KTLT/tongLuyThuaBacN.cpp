#include <bits/stdc++.h>
using namespace std;

void result(int m, int max_size, int f_index, int *arr, int &count, int n)
{
    if (m == 0)
        count++;
    else
    {
        for (int i = arr[f_index - 1] + 1; i <= max_size; i++)
        {
            if (m - (int)pow(i, n) >= 0)
            {
                arr[f_index] = i;
                result(m - (int)pow(i, n), max_size, f_index + 1, arr, count, n);
            }
            else
                break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        int max_size = (int)floor(pow(m, 1.0 / n));
        int f_index = 1;
        int arr[max_size + 1];
        memset(arr, 0, sizeof(arr));
        int count = 0;

        result(m, max_size, f_index, arr, count, n);

        cout << count << endl;
    }
    system("pause");
    return 0;
}