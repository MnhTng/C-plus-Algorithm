#include <bits/stdc++.h>
using namespace std;

void grayToBin(string s)
{
    string bin = "";
    bin += s[0];

    for (int i = 1; i < s.size(); i++)
        bin += (s[i] != s[i - 1]) ? '1' : '0';

    cout << bin << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        grayToBin(s);
    }
    system("pause");
    return 0;
}