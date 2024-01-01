/*
    arr[0] : arr[j] > arr[0] --> swap( arr[0], arr[j] )
             arr[j + n] > arr[0] --> swap( arr[0], arr[j + n] )
    arr[1] : ...
    ...
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i< n; i++ )
        cin >> arr[i];
    for( int i = 0; i < n - 1; i++ ){
        for( int j = i + 1; j < n; j++ ){
            if( arr[i] > arr[j] )
                swap( arr[i], arr[j] );
        }
        cout << "Buoc " << i + 1 << ": ";
        for( int x : arr )
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}