#include <bits/stdc++.h>
using namespace std;

int primeDivisors( long n ){
    int count = 0;
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 ){
            count++;
            while( n % i == 0 )
                n /= i;
        }
    }
    if( n != 1 )
        count++;
    return count >= 3;
}

int reversible( long n ){
    long rev = 0, temp = n;
    while( temp ){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long l, r;
        cin >> l >> r;
        for( long i = l; i <= r; i++ ){
            if( reversible( i ) && primeDivisors( i ) )
                cout << i << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}