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

        int shortest[m][n];
        shortest[0][0] = arr[0][0];
        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ ){
                if( i == 0 && j != 0 )
                    shortest[i][j] = shortest[i][j - 1] + arr[i][j];
                else if( i != 0 && j == 0 )
                    shortest[i][j] = shortest[i - 1][j] + arr[i][j];
                else
                    shortest[i][j] = min( shortest[i - 1][j], shortest[i][j - 1] ) + arr[i][j]; 
            }
        }

        cout << shortest[m - 1][n - 1] << endl;
    }
    system("pause");
    return 0;
}