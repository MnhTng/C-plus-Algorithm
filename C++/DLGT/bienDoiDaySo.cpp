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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }

        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                cout << a[i] << "]";
            else
                cout << a[i] << " ";
        }
        cout << endl;

        vector<int> result;
        while (--n)
        {
            cout << "[";
            for (int i = 1; i < v.size(); i++)
            {
                if (i == v.size() - 1)
                    cout << v[i] + v[i - 1] << "]";
                else
                    cout << v[i] + v[i - 1] << " ";

                result.push_back(v[i] + v[i - 1]);
            }
            cout << endl;

            v = result;
            result.clear();
        }
    }
    system("pause");
    return 0;
}