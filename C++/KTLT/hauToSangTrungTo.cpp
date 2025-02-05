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
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
                st.push(string(1, s[i]));
            else
            {
                k = st.top();
                st.pop();
                k = '(' + st.top() + s[i] + k + ')';
                st.pop();
                st.push(k);
            }
        }
        cout << st.top() << endl;
    }
    system("pause");
    return 0;
}