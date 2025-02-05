#include <bits/stdc++.h>
using namespace std;

string parentheses = "()[]{}";

int check(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return 0;
            if ((s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '[') || (s[i] == '}' && st.top() != '{'))
                return 0;
            st.pop();
        }
    }
    if (st.empty())
        return 1;
    return 0;
}

void sinh(vector<string> &v, string s, int n)
{
    for (int i = 0; i < parentheses.size(); i++)
    {
        s += parentheses[i];

        if (s.size() == n)
        {
            if (check(s))
                v.push_back(s);
        }
        else
            sinh(v, s, n);

        s.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
            cout << "NOT FOUND" << endl;
        else
        {
            vector<string> v;
            string s = "";

            sinh(v, s, n);

            sort(v.begin(), v.end());
            for (string x : v)
                cout << x << " ";
            cout << endl;
        }
    }
    system("pause");
    return 0;
}