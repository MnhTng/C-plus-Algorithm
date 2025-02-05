#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;

        int check = 1;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
                st.push(c);
            else if (c == '}')
            {
                if (st.empty())
                {
                    check = 0;
                    break;
                }
                else if (st.top() == '{')
                    st.pop();
            }
            else if (c == ']')
            {
                if (st.empty())
                {
                    check = 0;
                    break;
                }
                else if (st.top() == '[')
                    st.pop();
            }
            else if (c == ')')
            {
                if (st.empty())
                {
                    check = 0;
                    break;
                }
                else if (st.top() == '(')
                    st.pop();
            }
        }

        if (!st.empty())
            check = 0;
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}