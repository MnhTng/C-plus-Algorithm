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
            arr[i] = i + 1;
        do{
            for( int i = 0; i < n; i++ ){
                if( i < n - 1 )
                    cout << arr[i] << " ";
                else
                    cout << arr[i] << endl;
            }
        }
        while( next_permutation( arr, arr + n ) );
    }
    system("pause");
    return 0;
}