#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    for( int i = 0; i < n; i++ ){
        int min = *max_element( arr, arr + n ), pos = 0;
        for( int j = i + 1; j < n; j++ ){
            if( min > arr[j] ){
                min = arr[j];
                pos = j;
            }
        }
        if( min < arr[i] ){
            swap( arr[i], arr[pos] );
            cout << arr[i] << " " << arr[pos] << endl;
        }
    }
    system("pause");
    return 0;
}