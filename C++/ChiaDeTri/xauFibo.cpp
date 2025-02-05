#include <bits/stdc++.h>
using namespace std;

char solve(long long n, long long k, long long *fibo)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= fibo[n - 2])
        return solve(n - 2, k, fibo);
    else
        return solve(n - 1, k - fibo[n - 2], fibo);
}

int main()
{
    long long n, k;
    cin >> n >> k;

    long long fibo[100];
    fibo[1] = 1, fibo[2] = 1;
    for (int i = 3; i <= 92; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];

    cout << solve(n, k, fibo) << endl;
    system("pause");
    return 0;
}