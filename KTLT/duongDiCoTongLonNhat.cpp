#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        long arr[m][n];

        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ )
                cin >> arr[i][j];
        }

        if( m == 1 ){
            for( int j = 1; j < n; j++ )
                arr[0][j] = arr[0][j - 1] + arr[0][j];
        }
        else{
            for( int j = 1; j < n; j++ ){
                for( int i = 0; i < m; i++ ){
                    if( i == 0 )
                        arr[i][j] = max( arr[i][j - 1], arr[i + 1][j - 1] ) + arr[i][j];
                    else if( i == m - 1 )
                        arr[i][j] = max( arr[i][j - 1], arr[i - 1][j - 1] ) + arr[i][j];
                    else
                        arr[i][j] = max( { arr[i][j - 1], arr[i - 1][j - 1], arr[i + 1][j - 1] } ) + arr[i][j];
                }
            }
        }

        long longest = INT_MIN;
        for( int i = 0; i < m; i++ ){
            if( arr[i][n - 1] > longest )
                longest = arr[i][n - 1];
        }

        cout << longest << endl;
    }
    system("pause");
    return 0;
}