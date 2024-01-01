/*
So nguyen n duoc phan tich thanh dang thua so nguyen to : 
                n = p1^e1 * p2^e2 * ... * pk^ek
    ==> So luong uoc cua n la : 
                d(n) = (e1 + 1) * (e2 + 1) * ... * (ek + 1)
*/
#include <bits/stdc++.h>
using namespace std;

int prime( int n ){
    for( int i = 2; i <= sqrt ( n ); i++ ){
        if( n % i == 0 )
            return 0;
    }
    return 1;
}

long long primeDivisor( int n ){
    long long kq = 1;
    for( int i = 2; i <= n; i++ ){
        if( prime( i ) ){
            int count = 0;
            for( int j = i; j <= n; j *= i ){
                count += n / j;
            }
            kq *= count + 1;
        }
    }
    return kq;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        if( n <= 100 ){
            cout << primeDivisor( n ) << endl;
        }
    }
    system("pause");
    return 0;
}