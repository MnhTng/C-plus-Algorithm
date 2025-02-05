#include <bits/stdc++.h>
using namespace std;

void sinh(string s, string v, int n, int k, int index)
{
    for (int i = index; i < n; i++)
    {
        v += s[i];

        if (v.size() == k)
            cout << v << endl;
        else
            sinh(s, v, n, k, i);

        v.pop_back();
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
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        string v = "";
        sinh(s, v, n, k, 0);
    }
    system("pause");
    return 0;
}