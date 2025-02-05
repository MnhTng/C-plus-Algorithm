#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    if( binary_search( arr, arr + n, x ) )
        cout << "1" << endl;
    else
        cout << "0" << endl;
    system("pause");
    return 0;
}