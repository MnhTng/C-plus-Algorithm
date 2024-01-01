#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        string x, y;
        cin >> n >> x >> y;

        if( x.size() > n )
            x = x.substr( 0, n );
        if( y.size() > n )
            y = y.substr( 0, n );

        long long a = 0, b = 0;

        int count = n - 1;
        for( int i = 0; i < x.size(); i++ ){
            if( x[i] == '1' )
                a += (long long)pow( 2, count );
            count--;
        }

        count = n - 1;
        for( int i = 0; i < y.size(); i++ ){
            if( y[i] == '1' )
                b += (long long)pow( 2, count );
            count--;
        }
        
        if( abs( b - a ) > 1 )
            cout << abs( b - a ) - 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}