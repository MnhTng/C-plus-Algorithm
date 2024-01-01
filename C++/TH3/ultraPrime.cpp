#include <iostream>
#include <math.h>
using namespace std;

int nto( int x ){
    int i;
    if( x == 0 || x == 1 )
        return 0;
        
    for( i = 2; i <= sqrt( x ); i++ ){
        if( x % i == 0 )
            return 0;
    }
    return 1;
}

int csNto( int x ){
    int y = x, temp = 0;
    while( y ){
        temp = y % 10;
        y /= 10;
        if( nto( temp ) == 0 )
            return 0;
    }
    return 1;
}

int revNto( int x ){
    int y = x, rev = 0;
    while( y ){
        rev = rev * 10 + y % 10;
        y /= 10;
    }
    if( rev == x ){
        if( nto( x ) )
            return 1;
    }
    return 0;
}

int sumNto( int x ){
    int y = x, sum = 0;
    while( y ){
        sum += y % 10;
        y /= 10;
    }
    if( nto( sum ) )
        return 1;
    else
        return 0;
}

int main(){
    int i;
    cout << "Cac so nguyen to ultra max : " << endl;
    for( i = 100000000; i < 1000000000; i++){
        if( revNto( i ) ){
            if( csNto( i ) ){
                if( sumNto( i ) ){
                    if( nto( i ) )
                        cout << i << endl;
                }
            }
        }
    }
    system("pause");
    return 0;
} 