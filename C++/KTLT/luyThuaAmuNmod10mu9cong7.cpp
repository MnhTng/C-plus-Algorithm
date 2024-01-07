#include <bits/stdc++.h>
using namespace std;

long long powMod( long a, int n ){
    long long kq = 1;

    while( n ){
        if( n % 2 == 1 ){
            kq *= a;
            kq %= (long long)( 1e9 + 7 );
        }
        a *= a;
        a %= (long long)( 1e9 + 7 );
        n /= 2;
    }

    return kq;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long a, n;
        cin >> a >> n;

        if( n == 0 )
            cout << "1" << endl;
        else if( a == 0 )
            cout << "0" << endl;
        else
            cout << powMod( a, n ) << endl;
    }
    system("pause");
    return 0;
}