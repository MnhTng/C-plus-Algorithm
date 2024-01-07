#include <bits/stdc++.h>
using namespace std;

int chinh_phuong( long long n ){
    long can = sqrt( n );
    return can * can == n;
}

int digit( long long n ){
    while( n ){
        int i = n % 10;
        n /= 10;
        if( !chinh_phuong( i ) )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int k;
        cin >> k;
        int check = 1;

        long long tren = pow( 10, k - 1 );
        tren = sqrt( tren );
        if( !chinh_phuong( (long long)pow( 10, k - 1) ) )
            tren += 1;
        long long duoi = pow( 10, k );
        duoi = sqrt( duoi );

        for( long long i = tren; i < duoi; i++ ){
            if( digit( i * i ) ){
                check = 0;
                cout << i * i << endl;
                break;
            }
        }
        if( check )
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}