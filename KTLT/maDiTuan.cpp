#include <bits/stdc++.h>
using namespace std;

void sinh( map<pair<int, int>, int> &mp, int *kq, int n, int k, int x, int y, int *hang, int *cot, int f_index ){
    if( f_index - 1 == k )
        return;
    else{
        for( int i = kq[f_index - 1]; i < 8; i++ ){
            int row = x + hang[i];
            int col = y + cot[i];

            if( ( row > 0 && row <= n ) && ( col > 0 && col <= n ) ){
                pair<int, int> temp = make_pair( row, col );
                mp[temp]++;
            }

            sinh( mp, kq, n, k, x + hang[i], y + cot[i], hang, cot, f_index + 1 );
        }
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k, x, y;
        cin >> n >> k >> x >> y;

        map<pair<int, int>, int> mp;
        pair<int, int> temp = make_pair( x, y );
        mp[temp]++;

        int f_index = 1;
        int kq[1000];
        memset( kq, 0, sizeof( kq ) );

        int hang[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
        int cot[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };

        sinh( mp, kq, n, k, x, y, hang, cot, f_index );

        cout << mp.size() << endl;
    }
    system("pause");
    return 0;
}