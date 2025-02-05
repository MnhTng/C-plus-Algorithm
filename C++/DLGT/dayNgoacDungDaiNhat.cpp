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
        vector<int> v(s.size());
        fill(v.begin(), v.end(), 0);
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
                st.push({s[i], i});
            else if (s[i] == ')' && st.top().first == '(')
            {
                v[i] = v[i - 1];
                v[i] += st.top().second != 0 ? v[st.top().second - 1] : 0;
                v[i] += 2;
                st.pop();
            }
            else
                st.push({s[i], i});
        }

        int result = 0;
        for (int i = 0; i < v.size(); i++)
            result = max(result, v[i]);
        cout << result << endl;
    }
    system("pause");
    return 0;
}