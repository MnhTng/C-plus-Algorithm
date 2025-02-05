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

        queue<long long> q;
        q.push(1);
        while (1)
        {
            long long temp = q.front();
            q.pop();

            if (temp % n == 0)
            {
                cout << temp << endl;
                break;
            }

            q.push(temp * 10);
            q.push(temp * 10 + 1);
        }
    }
    system("pause");
    return 0;
}