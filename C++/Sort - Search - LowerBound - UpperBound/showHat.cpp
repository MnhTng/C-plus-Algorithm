#include <bits/stdc++.h>
using namespace std;

int comp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), comp);

    int count = 1, temp = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first > temp)
        {
            count++;
            temp = v[i].second;
        }
    }
    
    cout << count << endl;
    system("pause");
    return 0;
}