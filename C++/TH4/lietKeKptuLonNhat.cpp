#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for( int i = 0; i < n; i++ )
            cin >> arr[i];
        sort( arr, arr + n, greater<int>() );

        for( int i = 0; i < k; i++ )
            cout << arr[i] << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}