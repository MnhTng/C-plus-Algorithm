#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ )
            cin >> arr[i];
        sort( arr, arr + n );
        
        int min = arr[n - 1];
        for( int i = 1; i < n; i++ ){
            if( arr[i] - arr[i - 1] < min )
                min = arr[i] - arr[i - 1];
        }

        cout << min << endl;
    }
    system("pause");
    return 0;
}