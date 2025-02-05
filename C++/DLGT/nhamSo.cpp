#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);

    string x1 = s1, x2 = s1, y1 = s2, y2 = s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '5')
            x1[i] = '3';
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '3')
            x2[i] = '5';
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '5')
            y1[i] = '3';
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '3')
            y2[i] = '5';
    }

    int m1 = stoi(x1), m2 = stoi(x2), n1 = stoi(y1), n2 = stoi(y2);
    cout << m1 + n1 << " " << m2 + n2 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        solve(a, b);
    }
    system("pause");
    return 0;
}