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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, 1});
            v.push_back({y, -1});
        }
        sort(v.begin(), v.end());

        int result = 0, count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            count += v[i].second;
            result = max(result, count);
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}