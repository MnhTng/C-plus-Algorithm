#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, k;
        cin >> s;
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                k = st.top();
                st.pop();
                k = '(' + k + s[i] + st.top() + ')';
                st.pop();
                st.push(k);
            }
            else
                st.push(string(1, s[i]));
        }
        cout << st.top() << endl;
    }
    system("pause");
    return 0;
}