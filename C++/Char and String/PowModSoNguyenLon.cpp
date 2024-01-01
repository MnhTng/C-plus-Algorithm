/*
    ( a ^ b) % p = ( ( a % p ) ^ b ) % p
    ( a * b ) % p = [ ( a % p ) * ( b % p ) ] % p
*/
#include <bits/stdc++.h>
using namespace std;

long long surplus( string s1, long long s2 ){
    long long num1 = 0;
    for( char x : s1 ){
        num1 = ( num1 * 10 + (int)x - 48 ) % s2;
    }
    return num1;
}

long long powMod( long long x, long long y, long long p ){
    long long kq = 1;
    while( y ){
        if( y % 2 == 1 ){
            kq *= x;
            kq %= p;
        }
        x *= x;
        x %= p;
        y /= 2;
    }
    return kq;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1;
        cin >> s1;
        long long s2, p;
        cin >> s2 >> p;
        long long num = surplus( s1, s2 );
        cout << powMod( num, s2, p ) << endl;
    }
    system("pause");
    return 0;
}