#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string m, n, temp1, temp2, temp3, temp4;
        cin >> m >> n;
        long long s1, s2, s3, s4;
        if( m.size() > 19 )
            m = m.substr( 0, 19 );
        if( n.size() > 19 )
            n = n.substr( 0, 19 );
        for( char &x : m ){
            if( (int)x - 48 == 6 )
                x = '5';
            temp1.push_back( x );
            if( (int)x - 48 == 5 )
                x = '6';
            temp2.push_back( x );
        }
        for( char &x : n ){
            if( (int)x - 48 == 6 )
                x = '5';
            temp3.push_back( x );
            if( (int)x - 48 == 5 )
                x = '6';
            temp4.push_back( x );
        }
        s1 = stoll( temp1 ), s2 = stoll( temp2 ), s3 = stoll( temp3 ), s4 = stoll( temp4 );
        cout  << s1 + s3 << " " << s2 + s4 << endl;
    }
    system("pause");
    return 0;
}