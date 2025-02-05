#include <bits/stdc++.h>
using namespace std;

void sinh(vector<int> v, int n, int k, int sum, int index, int &check)
{
    for (int i = index; i <= 9; i++)
    {
        v.push_back(i);
        sum += i;

        if (v.size() == k && sum == n)
        {
            check = 1;

            for (int j = 0; j < v.size(); j++)
            {
                cout << v[j];
                if (j != v.size() - 1)
                    cout << " + ";
            }
            cout << endl;
        }
        else
            sinh(v, n, k, sum, i + 1, check);

        v.pop_back();
        sum -= i;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v;
        int sum = 0, check = 0;
        sinh(v, n, k, sum, 1, check);

        if (!check)
            cout << "NOT FOUND" << endl;
    }
    system("pause");
    return 0;
}