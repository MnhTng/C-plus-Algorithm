#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, vector<int> v, int *pos, int n, int k, int sum, int index, int &maxSize)
{
    for (int i = pos[index - 1] + 1; i <= n; i++)
    {
        sum += a[i];
        v.push_back(a[i]);

        if (sum % k == 0){
            int n = v.size();
            maxSize = max(maxSize, n);
        }

        sinh(a, v, pos, n, k, sum, i + 1, maxSize);
        sum -= a[i];
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

        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int pos[n + 1];
        for (int i = 0; i <= n; i++)
            pos[i] = i;
        vector<int> v;
        int maxSize = 0;
        
        sinh(a, v, pos, n, k, 0, 1, maxSize);

        cout << maxSize << endl;
    }
    system("pause");
    return 0;
}