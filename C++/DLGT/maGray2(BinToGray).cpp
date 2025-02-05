#include <bits/stdc++.h>
using namespace std;

void binToGray(string s)
{
    string gray = "";
    gray += s[0];

    for (int i = 1; i < s.size(); i++)
        gray += (s[i] != s[i - 1]) ? '1' : '0';

    cout << gray << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        binToGray(s);
    }
    system("pause");
    return 0;
}