/*
Xet muc do uu tien cua cac toan tu
    *, /, %  -->  +, -  -->  (
        muc do uu tien cao hon duoc day vao stack
        muc do uu tien khong cao hon se duoc xuat ra
Chuyen tu tien to -> hau to
*/

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string tmp = s[i] + op2 + op1;
            st.push(tmp);
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