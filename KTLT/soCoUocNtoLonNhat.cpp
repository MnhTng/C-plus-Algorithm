#include <bits/stdc++.h>
using namespace std;

int nto_max( long long n ){
    if( n < 2 )
        return 0;
    if( ( n != 2 && n % 2 == 0 ) || ( n != 3 && n % 3 == 0 ) )
        return 0;
    
    for( long long i = 5; i <= sqrt( n ); i += 6 ){
        if( n % i == 0 || n % ( i + 2 ) == 0 )
            return 0;
    }

    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long l, r;
        cin >> l >> r;
        
        for( long long i = r; i >= l; i-- ){
            if( nto_max( i ) ){
                cout << i << endl;
                break;
            }
        }
    }
    system("pause");
    return 0;
}