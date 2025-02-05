#include <bits/stdc++.h>
using namespace std;

struct customer
{
    int id, orderTime, prepareTime;
};

bool comp(customer x, customer y)
{
    return x.orderTime + x.prepareTime < y.orderTime + y.prepareTime;
}

int main()
{
    int n;
    cin >> n;

    customer person[n];
    for (int i = 0; i < n; i++)
    {
        person[i].id = i + 1;
        cin >> person[i].orderTime >> person[i].prepareTime;
    }
    stable_sort(person, person + n, comp);

    for (int i = 0; i < n; i++)
        cout << person[i].id << " ";
    cout << endl;
    system("pause");
    return 0;
}