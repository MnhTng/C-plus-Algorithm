#include <bits/stdc++.h>
using namespace std;

string bin(long long n)
{
    string s = "";
    while (n)
    {
        if (n % 2)
            s = "1" + s;
        else
            s = "0" + s;
        n /= 2;
    }
    return s;
}
string solve(string s1, string s2)
{
    while (s1.length() < s2.length())
        s1 = "0" + s1;

    while (s2.length() < s1.length())
        s2 = "0" + s2;

    int carry = 0;
    string result = "";

    for (int i = s1.size() - 1; i >= 0; i--)
    {
        int sum = (s1[i] - '0') + (s2[i] - '0') + carry;
        if (sum == 0)
        {
            result = "0" + result;
            carry = 0;
        }
        else if (sum == 1)
        {
            result = "1" + result;
            carry = 0;
        }
        else if (sum == 2)
        {
            result = "0" + result;
            carry = 1;
        }
        else if (sum == 3)
        {
            result = "1" + result;
            carry = 1;
        }
    }

    return result;
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

        string tmp = bin(k + 1);
        cout << solve(tmp, s) << endl;
    }
    system("pause");
    return 0;
}