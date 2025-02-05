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

        vector<pair<int, int>> job(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;

            job[i] = {y, z};
        }
        sort(job.begin() + 1, job.end(), greater<pair<int, int>>());

        int check[n + 1];
        memset(check, 0, sizeof(check));

        int count = 0, profit = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = min(n, job[i].first); j >= 1; j--)
            {
                if (!check[j])
                {
                    profit += job[i].second;
                    count++;
                    check[j] = 1;
                    break;
                }
            }
        }

        cout << count << " " << profit << endl;
    }
    system("pause");
    return 0;
}