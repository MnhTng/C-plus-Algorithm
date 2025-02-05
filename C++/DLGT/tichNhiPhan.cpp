#include <bits/stdc++.h>
using namespace std;

void solve(string s1, string s2)
{
    long long a = 0, b = 0;

    for (int i = 0; i < s1.size(); i++)
        a += (s1[i] - '0') * pow(2, s1.size() - 1 - i);
    for (int i = 0; i < s2.size(); i++)
        b += (s2[i] - '0') * pow(2, s2.size() - 1 - i);

    cout << a * b << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        solve(s1, s2);
    }
    system("pause");
    return 0;
}