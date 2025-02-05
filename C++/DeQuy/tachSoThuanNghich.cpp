#include <bits/stdc++.h>
using namespace std;

int check(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            return 0;
    }
    return 1;
}

void sinh(string s, string temp, vector<string> v, vector<vector<string>> &result, int index)
{
    if (index >= s.size())
        result.push_back(v);

    for (int i = index; i < s.size(); i++)
    {
        if (check(s.substr(index, i - index + 1)))
        {
            v.push_back(s.substr(index, i - index + 1));
            sinh(s, temp, v, result, i + 1);
            v.pop_back();
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s = to_string(n);

        vector<vector<string>> result;
        vector<string> v;
        string temp;
        sinh(s, temp, v, result, 0);

        for (vector<string> x : result)
        {
            for (string y : x)
                cout << y << " ";
            cout << endl;
        }
    }
    system("pause");
    return 0;
}