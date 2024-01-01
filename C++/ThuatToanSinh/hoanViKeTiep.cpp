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
        next_permutation( arr, arr + n );
        for( int x : arr )
            cout << x << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}