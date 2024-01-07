#include <bits/stdc++.h>
using namespace std;

long long uoc( long long a, long long b ){
    long long kq = 0;
    for( int i = 1; i <= sqrt( a ); i++ ){
        if( a % i == 0 ){
            kq += i;
            if( i != a / i )
                kq += a / i;
        }
    }
    if( kq - a == b )
        return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long a, b;
        cin >> a >> b;
        if( uoc( a, b ) && uoc( b, a ) )
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}