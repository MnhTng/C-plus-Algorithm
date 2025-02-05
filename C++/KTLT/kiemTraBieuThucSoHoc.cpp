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
        for (char i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                s.erase(i, 1);
        }

        stack<char> st;
        int check = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ')')
            {
                if (!isalpha(s[i]))
                    st.push(s[i]);
            }
            else
            {
                if (st.top() == '(')
                {
                    check = 0;
                    cout << "Yes" << endl;
                    break;
                }
                while (!st.empty() && st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
        if(check)
            cout << "No" << endl;
    }
    system("pause");
    return 0;
}
