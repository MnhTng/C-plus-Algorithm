/*
    Tong uoc cua 2004^1 = 4704
    Tong uoc cua 2004^x = 4704 + 2004^1 * 4703 + ... + 2004^( x - 1 ) * 4703
    Tong uoc cua 2004^x MOD 29 :
        4704 % 29 + { [ ( 2004 % 29 ) ^ 1 ] % 29 * 4703 % 29 } % 29 + ... 
        + { [ ( 2004 % 29 ) ^ x - 1] % 29 * 4703 % 29 } % 29
*/

/*
    ( a ^ b) % p = ( ( a % p ) ^ b ) % p
    ( a * b ) % p = [ ( a % p ) * ( b % p ) ] % p
    ( a + b ) % p = [ ( a % p ) + ( b % p ) ] % p
*/

#include <bits/stdc++.h>
using namespace std;

long long powMod( long y ){
    long long first = 4704 % 29;
    long long next = 4703 % 29;

    for( long i = 1; i < y; i++ ){
        long temp = i;
        long long kq = 1, x = 2004;
        while( temp ){
            if( temp % 2 == 1 ){
                kq *= x;
                kq %= 29;
            }
            x *= x;
            x %= 29;
            temp /= 2;
        }
        first += ( kq * next ) % 29;
        first %= 29;
    }
    return first;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long x;
        cin >> x;
        cout << powMod( x ) << endl;
    }
    system("pause");
    return 0;
}