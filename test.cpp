#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
    }
    cout << "Maximum sum of a contiguous subarray: " << max_sum << endl;
    system("pause");
    return 0;
}