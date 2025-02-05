#include <bits/stdc++.h>
using namespace std;

// int sinh(string &s, int n, int length, int &check)
// {
//     int i = length;
//     while (i >= 1 && s[i] == '9')
//     {
//         s[i] = '0';
//         i--;
//     }
//     if (i == 0)
//         check = 0;
//     else
//         s[i] = '9';
//     long long kq = stoll(s);
//     return kq % n == 0 ? 1 : 0;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         int length = min(n, 19);
//         for (int i = 1; i <= length; i++)
//             s += '0';
//         int check = 1, cond = 1;
//         while (check)
//         {
//             if (sinh(s, n, length, check))
//             {
//                 cond = 0;
//                 long long kq = stoll(s);
//                 cout << kq << endl;
//                 break;
//             }
//         }
//         if (cond)
//             cout << "0" << endl;
//     }
//     return 0;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        queue<long long> q;
        q.push(9);
        while (1)
        {
            long long k = q.front();
            q.pop();
            if (k % n == 0)
            {
                cout << k << endl;
                break;
            }
            q.push(k * 10);
            q.push(k * 10 + 9);
        }
    }
    system("pause");
    return 0;
}