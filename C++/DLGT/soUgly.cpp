#include <bits/stdc++.h>
using namespace std;

vector<long long> v;
set<long long> s;

void solve()
{
    s.insert(1);

    while (1)
    {
        for (auto i : s)
        {
            if (i > 1e18)
                break;
            v.push_back(i * 2);
            v.push_back(i * 3);
            v.push_back(i * 5);
        }
        for (auto i : v)
            s.insert(i);

        if (s.size() > 1e4)
            break;
        v.clear();
    }

    v.clear();
    for (auto i : s)
        v.push_back(i);
}

int main()
{
    int t;
    cin >> t;
    solve();
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << endl;
    }
}