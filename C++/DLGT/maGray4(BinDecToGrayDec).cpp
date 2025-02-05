#include <bits/stdc++.h>
using namespace std;

string binToGray(string s)
{
    string gray = "";
    gray += s[0];

    for (int i = 1; i < s.size(); i++)
        gray += (s[i] != s[i - 1]) ? '1' : '0';

    return gray;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s = "";
        while (n >= 1)
        {
            s = to_string(n % 2) + s;
            n /= 2;
        }

        s = binToGray(s);

        int result = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                result += pow(2, s.size() - i - 1);
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}