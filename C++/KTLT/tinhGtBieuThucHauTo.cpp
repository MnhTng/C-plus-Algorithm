#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            if (s[i] == '+')
                st.push(op2 + op1);
            else if (s[i] == '-')
                st.push(op2 - op1);
            else if (s[i] == '*')
                st.push(op2 * op1);
            else
                st.push(op2 / op1);
        }
    }
    cout << st.top() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        solve(s);
    }
    system("pause");
    return 0;
}