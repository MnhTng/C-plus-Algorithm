#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n], b[n - 1];
        map<long long, long long> mp;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }
        for (long long i = 0; i < n - 1; i++)
        {
            cin >> b[i];
            mp.erase(b[i]);
        }

        cout << mp.begin()->second + 1 << endl;
    }
    system("pause");
    return 0;
}