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

        queue<string> q;
        q.push("1");
        int count = 0;
        while (1)
        {
            string temp = q.front();
            q.pop();

            if (temp.size() < s.size() || (temp.size() == s.size() && temp <= s))
                count++;
            else
            {
                cout << count << endl;
                break;
            }

            q.push(temp + "0");
            q.push(temp + "1");
        }
    }
    system("pause");
    return 0;
}