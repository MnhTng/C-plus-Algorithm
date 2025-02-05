#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        string s;
        cin >> d >> s;

        vector<int> v(26);
        for (char c : s)
            v[c - 'a']++;

        int maxNum = *max_element(v.begin(), v.end());
        if (maxNum * (d - 1) > s.size())
            cout << "-1" << endl;
        else
            cout << "1" << endl;
    }
    system("pause");
    return 0;
}