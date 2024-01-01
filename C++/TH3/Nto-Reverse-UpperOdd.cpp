#include <iostream>
#include <math.h>
using namespace std;

long nto( long x ){
    int i;
    for( i = 2; i <= sqrt( x ); i++ ){
        if( x % i == 0 ){
            return 0;
            break;
        }
    }
    return 1;
}

long reverse( long x ){
    long y = x, rev = 0;
    while( y ){
        rev = rev * 10 + y % 10;
        y /= 10;
    }
    if( rev == x )
        return 1;
    else 
        return 0;
}

long upperOdd( long x ){
    long y = x;
    int temp = 0;
    while( y ){
        temp = y % 10;
        y /= 10;
        if( temp % 2 == 0 ){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    long i;
    cout << "Cac so nguyen to vua thuan nghich vua sieu LE : " << endl;
    for( i = 100000; i < 1000000000; i++ ){
        if( reverse( i ) ){
            if( upperOdd( i ) ){
                if( nto( i ) ){
                    cout << i << endl;
                }
            }
        }
    }
    system("pause");
    return 0;
}