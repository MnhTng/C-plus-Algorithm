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
        int arr[n];
        map<int, int> mp;
        for (int &x : arr)
        {
            cin >> x;
            mp[x]++;
        }
        for (auto ite : mp)
        {
            int count = 0;
            while (count < ite.second)
            {
                cout << ite.first << " ";
                count++;
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}