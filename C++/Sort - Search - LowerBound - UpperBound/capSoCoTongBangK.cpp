#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // int arr[n];
        // map<int, int> mp;
        // for( int &x : arr ){
        //     cin >> x;
        //     mp[x]++;
        // }
        // int count = 0;
        // for( int i = 0; i < n; i++ ){
        //     if( k == arr[i] * 2 )
        //         count += mp[arr[i]] - 1;
        //     else
        //         count += mp[k - arr[i]];
        // }
        // cout << count / 2 << endl;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            auto ite1 = lower_bound(a + i + 1, a + n, k - a[i]);
            auto ite2 = upper_bound(a + i + 1, a + n, k - a[i]);
            result += ite2 - ite1;
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}