#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int *pos, stack<int> result, int f_index, int sum, int n, int s)
{
    if (sum == s)
    {
        cout << "[";
        while (!result.empty())
        {
            cout << result.top() << " ";
            result.pop();
        }
        cout << "]";
    }
    else
    {
        for (int i = pos[f_index - 1] + 1; i <= n; i++)
        {
            if (sum + a[i] <= s)
            {
                result.push(a[i]);
                pos[f_index] = i;
                sinh(a, pos, result, f_index + 1, sum + a[i], n, s);
            }
            else
            {
                if (!result.empty())
                    result.pop();
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int a[n], pos[n + 1];
        pos[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[i] = 0;
        }
        sort(a, a + n);

        stack<int> result;
        int f_index = 1, sum = 0;
        sinh(a, pos, result, f_index, sum, n, s);
    }
    system("pause");
    return 0;
}