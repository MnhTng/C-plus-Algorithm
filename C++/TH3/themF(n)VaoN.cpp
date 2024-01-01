/*
    Neu n chan : n = n + k * 2
    Neu n le : n = n + f( n ) + ( k - 1 ) * 2 
*/

#include <bits/stdc++.h>
using namespace std;

int primeDivisor( int n ){
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return i;
    }
    return n;
}

long long add( int n, long k ){
    if( n % 2 == 0 )
        return n + k * 2;
    else{
        long long temp = n + primeDivisor( n );
        return temp + ( k - 1 ) * 2;
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        long k;
        cin >> n >> k;
        cout << add( n, k ) << endl;
    }
    system("pause");
    return 0;
}