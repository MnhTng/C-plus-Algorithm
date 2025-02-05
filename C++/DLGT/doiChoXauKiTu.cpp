#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;

        for (int i = 0; i < s.size(); i++)
        {
            char temp = s[s.size() - 1];
            int pos = s.size() - 1;

            for (int j = s.size() - 1; j > i && k; j--)
            {
                if (temp < s[j])
                {
                    temp = s[j];
                    pos = j;
                }
            }

            if (temp > s[i] && k)
                swap(s[i], s[pos]);
            k--;
        }

        cout << s << endl;
    }
    system("pause");
    return 0;
}