#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    auto ite = find( arr, arr + n, x );
    if( ite == arr + n )
        cout << "0" << endl;
    else
        cout << "1" << endl;
    system("pause");
    return 0;
}