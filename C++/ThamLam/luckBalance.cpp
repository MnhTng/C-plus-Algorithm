#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        int l, t;
        cin >> l >> t;
        if (t)
            v.push_back(l);
        else
            result += l;
    }
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < v.size(); i++)
    {
        if (i < k)
            result += v[i];
        else
            result -= v[i];
    }

    cout << result << endl;
    system("pause");
    return 0;
}