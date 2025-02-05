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

        int visited[1005];
        memset(visited, 0, sizeof(visited));
        int check = 1;
        set<int> s;

        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            s.insert(x);
            s.insert(y);

            if (visited[x] && visited[y])
                check = 0;
            else
            {
                visited[x] = 1;
                visited[y] = 1;
            }
        }

        for (auto x : s)
        {
            if (!visited[x])
                check = 0;
        }

        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}