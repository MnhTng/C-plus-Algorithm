#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        int arr[m][n];

        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ )
                cin >> arr[i][j];
        }

        if( n == 1 ){
            for( int i = 1; i < m; i++ )
                arr[i][0] += arr[i - 1][0];
        }
        else{
            for( int i = 1; i < m; i++ ){
                for( int j = 0; j < n; j++ ){
                    if( j == 0 )
                        arr[i][j] += max( arr[i - 1][j], arr[i - 1][j + 1] );
                    else if( j == n - 1 )
                        arr[i][j] += max( arr[i - 1][j], arr[i - 1][j - 1] );
                    else
                        arr[i][j] += max( { arr[i - 1][j - 1], arr[i - 1][j], arr[i - 1][j + 1] } );
                }
            }
        }

        long result = INT_MIN;
        for( int i = 0; i < n; i++ ){
            if( result < arr[m - 1][i] )
                result = arr[m - 1][i];
        }

        cout << result << endl;
    }
    system("pause");
    return 0;
}