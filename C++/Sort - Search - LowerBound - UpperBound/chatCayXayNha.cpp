#include <bits/stdc++.h>
using namespace std;

int check(int *h, int n, int l, int height)
{
    int check = 0;
    for (int i = 0; i < n; i++)
        check += max(h[i] - height, 0);
    return check >= l;
}

int main()
{
    int n, l;
    cin >> n >> l;
    int h[n];
    for (int &x : h)
        cin >> x;

    int left = 0, right = *max_element(h, h + n);
    int result = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (check(h, n, l, mid))
        {
            result = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    cout << result << endl;
    system("pause");
    return 0;
}