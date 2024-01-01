// #include <iostream>
// #include <cmath>
// using namespace std;

// int perfect( long long n ){
//     int i;
//     long long kq = 0;
//     for( i = 1; i <= sqrt( n ); i++ ){
//         if( n % i == 0 ){
//             kq += i;
//             if( i != n / i )
//                 kq += n / i;
//         }
//     }
//     if( kq - n == n )
//         return 1;
//     else    
//         return 0;
// }

// int main(){
//     int t;
//     cin >> t;
//     while ( t-- ){
//         long long n, sum = 1;
//         cin >> n;
//         if( perfect( n ) )
//             cout << "1" << endl;
//         else
//             cout << "0" << endl;
//     }
//     system("pause");
//     return 0;
// }


/*
    Neu p la so nguyen to
    (2^p) - 1 cung la so nguyen to
    => Tich cua: ( 2^(p-1) ) * ( 2^p - 1 ) la 1 SO HOAN HAO
*/

#include <bits/stdc++.h>
using namespace std;

int prime( long long n ){
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return 0;
    }
    return 1;
}

int perfect( long long n ){
    for( long long i = 1; i <= 32; i++ ){
        if( prime( i ) ){
            long long temp = pow( 2, i ) - 1;
            if( prime( temp ) ){
                long long perfectt = temp * pow( 2, i - 1 );
                if( perfectt == n )
                    return 1;
            }
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        if( perfect( n ) )
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    system("pause");
    return 0;
}