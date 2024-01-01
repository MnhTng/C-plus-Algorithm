/*
    ( a * b ) % x = [ ( a % x ) * ( b % x ) ] % x
*/

#include <bits/stdc++.h>
using namespace std;

long long cal( int x, int y, long long p ){
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
        int x, y;
        long long p;
        cin >> x >> y >> p;
        cout << cal( x, y, p ) << endl;
    }
    system("pause");
    return 0;
}