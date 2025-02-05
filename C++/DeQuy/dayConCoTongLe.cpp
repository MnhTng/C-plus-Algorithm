#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int *pos, vector<vector<int>> &result, vector<int> temp, int n, int sum, int index)
{
    for (int i = pos[index - 1] + 1; i <= n; i++)
    {
        temp.push_back(a[i]);

        if ((sum + a[i]) % 2 == 1)
            result.push_back(temp);

        sinh(a, pos, result, temp, n, sum + a[i], i + 1);
        temp.pop_back();
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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<vector<int>> result;
        vector<int> temp;
        int sum = 0, index = 1;
        int pos[n + 1];
        for (int i = 0; i <= n; i++)
            pos[i] = i;

        sinh(a, pos, result, temp, n, sum, index);

        if (result.empty())
            cout << 0 << endl;
        else
        {
            sort(result.begin(), result.end());
            for (vector<int> v : result)
            {
                for (int x : v)
                    cout << x << " ";
                cout << endl;
            }
        }
    }
    system("pause");
    return 0;
}