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

        vector<int> v(26);
        for (char c : s)
            v[c - 'a']++;
        sort(v.begin(), v.end(), greater<int>());

        int size = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v[i])
                size++;
            else
                break;
        }

        int check = 1, cond = 0;
        for (int i = 0; i < size - 1; i++)
        {
            cond = 1;

            if (v[i] > s.size())
            {
                check = 0;
                break;
            }
        }

        if (check && cond)
            cout << "1" << endl;
        else
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}