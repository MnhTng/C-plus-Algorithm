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

        for (char &c : s)
            c = tolower(c);

        int result = 1;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                char c = s[i];
                int count = 1;

                for (int k = j; k < s.size(); k++)
                {
                    if (s[k] > c)
                    {
                        c = s[k];
                        count++;
                    }
                }

                result = max(result, count);
            }
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}