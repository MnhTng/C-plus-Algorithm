#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

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
            v.push_back({x, y});
        }
        sort(v.begin(), v.end(), comp);

        int result = 1, endTime = v[0].second;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i].first >= endTime)
            {
                result++;
                endTime = v[i].second;
            }
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}