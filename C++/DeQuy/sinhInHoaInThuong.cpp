#include <bits/stdc++.h>
using namespace std;

void sinh(string s, string temp, set<string> &result, int index)
{
    for (char c : {tolower(s[index]), toupper(s[index])})
    {
        temp += c;

        if (temp.size() == s.size())
            result.insert(temp);
        else
            sinh(s, temp, result, index + 1);

        temp.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        set<string> result;
        string temp;

        sinh(s, temp, result, 0);

        for (string x : result)
            cout << x << endl;
    }
    system("pause");
    return 0;
}