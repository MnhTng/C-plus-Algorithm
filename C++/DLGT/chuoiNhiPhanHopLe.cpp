#include <bits/stdc++.h>
using namespace std;

void sinh(int *a, int n, int &check)
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }

    if (!i)
        check = 0;
    else
        a[i] = 1;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        int n = s.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                count++;

            if (s[i] != '0' && s[i] != '1' && s[i] != '?')
                s.erase(i, 1);
        }

        int a[count + 1];
        memset(a, 0, sizeof(a));
        int check = 1;
        while (check)
        {
            int index = 1;
            for (char c : s)
            {
                if (c == '?')
                {
                    cout << a[index];
                    index++;
                }
                else
                    cout << c;
            }
            cout << endl;

            sinh(a, count, check);
        }
    }
    system("pause");
    return 0;
}