#include <bits/stdc++.h>
using namespace std;

void solve(priority_queue<int, vector<int>, greater<int>> pq)
{
    int length = 0, fee = 0;
    while (pq.size() > 1)
    {
        int temp1 = pq.top();
        pq.pop();
        int temp2 = pq.top();
        pq.pop();

        length = temp1 + temp2;
        fee += length;
        pq.push(length);
    }

    cout << fee << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }

        solve(pq);
    }
    system("pause");
    return 0;
}