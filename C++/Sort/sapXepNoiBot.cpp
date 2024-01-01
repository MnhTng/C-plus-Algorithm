/*
    1:  a[0] > a[1] --> swap( a[0], a[1] )
        a[1] > a[2] --> swap( a[1], a[2] )
        a[n] > a[n + 1] --> swap( a[n], a[n + 1] )
        ...
        size = size - 1 ( ko xet phan tu cuoi cung da duoc sap xep )
    2:  ...
        size = size - 1 ( ko xet phan tu cuoi cung da duoc sap xep )
    ...
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    for( int i = 0; i < n - 1; i++ ){
        int cond = 0;
        for( int j = 0; j < n - 1 - i; j++ ){
            if( arr[j] > arr[j + 1] ){
                swap( arr[j], arr[j + 1] );
                cond = 1;
            }
        }
        if( cond ){
            cout << "Buoc " << i + 1 << ": ";
            for( int x : arr )
                cout << x << " ";
            cout << endl;
        }
    }
    system("pause");
    return 0;
}