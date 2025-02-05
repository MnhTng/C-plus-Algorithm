#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int count = 0, result = a.size(), cond = 0, pos = a.size();
        for (char x : b)
        {
            if (a.find(x) != string::npos)
            {
                if (cond)
                {
                    if (a.find(x) < pos)
                    {
                        string temp(1, x);
                        a[a.find(x)] = '_';
                        a.insert(pos + 1, temp);
                        pos += 1;
                        count++;
                    }
                    else
                    {
                        pos = a.find(x);
                        a[a.find(x)] = '_';
                    }
                }
                else
                {
                    cond = 1;
                    pos = a.find(x);
                    a[a.find(x)] = '_';
                }
            }
            else
                count++;
        }
        result += count;
        cout << a << endl;
        cout << result << endl;
    }
    system("pause");
    return 0;
}