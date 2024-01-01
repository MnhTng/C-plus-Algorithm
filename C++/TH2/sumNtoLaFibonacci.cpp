#include <bits/stdc++.h>
using namespace std;

int prime( long n ){
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return 0;   
    }
    return 1;
}

int fibonacci( long n ){
    if( n == 0 || n == 1 )
        return 1;
    long fibo1 = 0, fibo2 = 1, fibo;
    for( int i = 3; i <= 93; i++ ){
        fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo;
        if( fibo == n )
            return 1;
        if( fibo > n )
            return 0;
    }
    return 0;
}

int sumDigits( long n ){
    int sum = 0;
    while( n ){
        sum += n % 10;
        n /= 10;
    }
    return fibonacci( sum );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long l, r;
        int cond = 0;
        cin >> l >> r;
        for( long i = l; i <= r; i++ ){
            if( prime( i ) && sumDigits( i ) ){
                cond = 1;
                cout << i << " ";
            }
        }
        if( !cond )
            cout << "-1";
        cout << endl;
    }
    system("pause");
    return 0;
}