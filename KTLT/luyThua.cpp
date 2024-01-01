#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long l, r;
        cin >> l >> r;

        int peak = 1;
        for( int i = 1; i < 40; i++ ){
            if( pow( 2, i ) <= r )
                peak = i;
        }

        int MAX = 1;
        for( long long num = 2; num <= sqrt( r ); num++ ){
            for( int exp = 2; exp <= peak; exp++ ){
                if( pow( num, exp ) > r )
                    break;
                
                if( pow( num, exp ) >= l && pow( num, exp ) <= r )
                    MAX = max( MAX, exp );
            }
        }

        cout << MAX << endl;
    }
    system("pause");
    return 0;
}