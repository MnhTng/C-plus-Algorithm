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

        stack<pair<char, int>> st;
        vector<char> result(s.size());
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push({s[i], i});
            else if (s[i] == ')')
            {
                if (!st.empty() && st.top().first == '(')
                {
                    result[st.top().second] = '0';
                    result[i] = '1';
                    st.pop();
                }
                else
                    result[i] = ' ';
            }
            else
                result[i] = s[i];
        }
        while (!st.empty())
        {
            result[st.top().second] = ' ';
            st.pop();
        }

        for (int i = 0; i < result.size(); i++)
        {
            if (result[i] == ' ')
                cout << -1;
            else
                cout << result[i];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}