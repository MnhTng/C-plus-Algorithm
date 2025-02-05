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
        int a[n];
        for (int &x : a)
            cin >> x;

        vector<int> v;
        v.push_back(a[0]);
        int index = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < v[index])
            {
                if (index && a[i] > v[index - 1])
                    v[index] = a[i];
                else if (!index)
                    v[index] = a[i];
            }
            else if (a[i] > v[index])
            {
                v.push_back(a[i]);
                index++;
            }
        }

        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}