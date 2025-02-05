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

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i].first = x;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i].second = x;
        }
        sort(v.begin(), v.end(), comp);

        int count = 1;
        int curEnd = v[0].second;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i].first >= curEnd)
            {
                count++;
                curEnd = v[i].second;
            }
        }

        cout << count << endl;
    }
    system("pause");
    return 0;
}