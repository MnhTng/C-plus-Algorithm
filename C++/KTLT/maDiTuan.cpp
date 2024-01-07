#include <bits/stdc++.h>
using namespace std;

void sinh( vector<vector<int>> &v, int n, int k, int x, int y, int *hang, int *cot, int f_index ){
    if( f_index - 1 == k )
        return;
    else{
        for( int i = 0; i < 8; i++ ){
            int row = x + hang[i];
            int col = y + cot[i];

            if( ( row >= 0 && row < n ) && ( col >= 0 && col < n ) ){
                v[row][col] = 1;

                sinh( v, n, k, x + hang[i], y + cot[i], hang, cot, f_index + 1 );
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k, x, y;
        cin >> n >> k >> x >> y;

        vector<vector<int>> v( n, vector<int>( n, 0 ) );
        v[x - 1][y - 1] = 1;
        int f_index = 1;

        int hang[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
        int cot[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };

        sinh( v, n, k, x - 1, y - 1, hang, cot, f_index );

        long kq = 0;
        for( auto hang : v ){
            for( int cot : hang )
                kq += ( cot == 1 ) ? 1 : 0;
        }

        cout << kq << endl;
    }
    system("pause");
    return 0;
}