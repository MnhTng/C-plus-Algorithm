#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, vector<int> v, int *pos, int n, int k, int index, int sum)
{
    for (int i = pos[index - 1] + 1; i <= n; i++)
    {
        if (sum + a[i] > k)
            break;
        else if (sum + a[i] == k)
        {
            cout << "[";
            for (int j = 0; j < v.size(); j++)
                cout << v[j] << " ";
            cout << a[i] << "]" << endl;
        }

        v.push_back(a[i]);
        sinh(a, v, pos, n, k, i + 1, sum + a[i]);
        v.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);

        int pos[n + 1], index = 1, sum = 0;
        vector<int> v;
        for (int i = 0; i <= n; i++)
            pos[i] = i;

        sinh(a, v, pos, n, k, index, sum);
    }
    system("pause");
    return 0;
}