#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.length() % 2 == 1)
            cout << -1 << endl;
        else
        {
            stack<char> st;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ')' && !st.empty())
                {
                    if (st.top() == '(')
                        st.pop();
                    else
                        st.push(s[i]);
                }
                else
                    st.push(s[i]);
            }

            
            int size = st.size(), result = 0;
            while (!st.empty() && st.top() == '(')
            {
                st.pop();
                result++;
            }
            cout << size / 2 + (result % 2) << endl;
        }
    }
    system("pause");
    return 0;
}