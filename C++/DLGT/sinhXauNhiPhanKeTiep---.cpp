#include <bits/stdc++.h>
using namespace std;

string s;

void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }

    if (i >= 0)
        s[i] = '1';
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;

        sinh();
    }
    system("pause");
    return 0;
}