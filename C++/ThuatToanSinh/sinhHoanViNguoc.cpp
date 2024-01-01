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
            arr[i] = n - i;
        do{
            for( int x : arr )
                cout << x;
            cout << " ";
        }
        while( prev_permutation( arr, arr + n ) );
        cout << endl;
    }
    system("pause");
    return 0;
}