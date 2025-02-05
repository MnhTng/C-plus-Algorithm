#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
        cin >> arr[i];
    sort( arr, arr + n );
    int min = *max_element( arr, arr + n );
    for( int i = 0; i < n - 1; i++ ){
        int temp = arr[i + 1] - arr[i];
        if( temp < min && temp != 0 )
            min = temp;
    }
    cout << min << endl;
    system("pause");
    return 0;
}