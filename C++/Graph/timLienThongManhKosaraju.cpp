#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005], rev[1005];
int visited[1005];
stack<int> st;

void DFS1(int u)
{
    visited[u] = 1;

    for (int x : v[u])
    {
        if (!visited[x])
            DFS1(x);
    }

    st.push(u);
}

void DFS2(int u)
{
    cout << u << " ";
    visited[u] = 1;

    for (int x : rev[u])
    {
        if (!visited[x])
            DFS2(x);
    }
}

void kosaraju(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
            DFS1(i);
    }
    memset(visited, 0, sizeof(visited));

    int result = 0;
    while (!st.empty())
    {
        int x = st.top();
        st.pop();

        if (!visited[x])
        {
            result++;
            DFS2(x);
            cout << endl;
        }
    }

    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x].push_back(y);
            rev[y].push_back(x);
        }

        for (int i = 1; i <= n; i++)
        {
            sort(v[i].begin(), v[i].end());
            sort(rev[i].begin(), rev[i].end());
        }

        memset(visited, 0, sizeof(visited));
        kosaraju(n);
    }
    system("pause");
    return 0;
}