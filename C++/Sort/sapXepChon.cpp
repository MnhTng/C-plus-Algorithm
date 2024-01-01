/*
    a[0] : a[i] minimize --> swap( a[0], a[i] )
    a[1] : a[j] minimize --> swap( a[1], a[j] )
    ...
*/ 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int  i = 0; i < n; i++ )
        cin >> arr[i];
    for( int i = 0; i < n - 1; i++ ){
        int temp = i;
        for( int j = i + 1; j < n; j++ ){
            if( arr[temp] > arr[j] )
                temp = j; 
        }
        swap( arr[i], arr[temp] );
        for( int x : arr )
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}