#include <bits/stdc++.h>
using namespace std;

void solve(priority_queue<long long, vector<long long>, greater<long long>> pq)
{
    long long length = 0, fee = 0;

    while (pq.size() > 1)
    {
        long long temp1 = pq.top();
        pq.pop();
        long long temp2 = pq.top();
        pq.pop();

        length = temp1 + temp2;
        fee += length;
        fee %= (long long)(1e9 + 7);
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
        long long n;
        cin >> n;

        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            pq.push(x);
        }

        solve(pq);
    }
    system("pause");
    return 0;
}