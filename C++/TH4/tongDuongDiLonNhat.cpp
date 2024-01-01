#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        int a[m][n];
        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ )
                cin >> a[i][j];
        }

        if( n == 1 ){
            for( int i = 1; i < m; i++ )
                a[i][0] = a[i - 1][0] + a[i][0];
        }
        else{
            for( int i = 1; i < m; i++ ){
                for( int j = 0; j < n; j++ ){
                    if( j == 0 )
                        a[i][j] = max( a[i -1][j], a[i - 1][j + 1] ) + a[i][j];
                    else if( j == n - 1 )
                        a[i][j] = max( a[i -1][j - 1], a[i - 1][j] ) + a[i][j];
                    else
                        a[i][j] = max( { a[i -1][j - 1], a[i - 1][j], a[i - 1][j + 1] } ) + a[i][j];
                }
            }
        }

        long max = 0;
        for( int j = 0; j < n; j++ ){
            if( max < a[m - 1][j] )
                max = a[m - 1][j];
        }

        cout << max << endl;
    }
    system("pause");
    return 0;
}