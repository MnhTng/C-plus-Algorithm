#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++)
        cin >> arr[i];
    sort( arr, arr + n, greater<int>() );
    int count = 0, amount = 0;
    for( int i = 0; i < n; i++ ){
        if( count >= arr[i] )
            break;
        amount += arr[i] - count;
        count++;
    }
    cout << amount << endl;
    system("pause");
    return 0;
}