#include <bits/stdc++.h>
using namespace std;

int detach( int *arr, int l, int r ){
    int index = l - 1; 
    int pivot = arr[r - 1];
    for( int i = l; i < r - 1; i++ ){
        if( arr[i] <= pivot ){
            index++;
            swap( arr[index], arr[i] );
        }
    }
    index++;
    swap( arr[index], arr[r - 1] );
    return index;
}

void quickSort( int *arr, int l, int r ){
    if( l >= r - 1 )
        return;
    int temp = detach( arr, l, r );
    for( int i = l; i < temp; i++ )
        cout << arr[i] << " ";
    cout << endl;
    quickSort( arr, l, temp );
    for( int i = temp + 1; i < r; i++ )
        cout << arr[i] << " ";
    cout << endl;
    quickSort( arr, temp + 1, r );
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    quickSort( arr, 0, n );
    for( int x : arr )
        cout << x << " ";
    cout << endl;
    system("pause");
    return 0;
}