#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int m, n;
        cin >> m >> n;
        int arr[m][n];
        for( int i = 1; i <= m; i++ ){
            for( int j = 1; j <= n; j++ )
                cin >> arr[i][j];
        }

        int prefix[m + 1][n + 1] = { 0 };
        for( int i = 1; i <= m; i++ ){
            for( int j = 1; j <= n; j++ )
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j];
        }

        int r1, r2, c1, c2;
        cin >> r1 >> r2 >> c1 >> c2;
            cout << prefix[r2][c2] - prefix[r1 - 1][c2] - prefix[r2][c1 - 1] + prefix[r1 - 1][c1 - 1]; 
    }
    system("pause");
    return 0;
}