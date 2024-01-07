#include <bits/stdc++.h>
using namespace std;

int prime( long long n ){
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        long long temp = n;
        long long check = 0, result = 1;

        if( prime( n ) )
            cout << "NO" << endl;
        else{
            for( long long i = 2; i <= sqrt( n ); i++ ){
                if( n % i == 0 ){
                    result *= i;
                    while( n % i == 0 )
                        n /= i;
                }
            }

            if( n != 1 )
                result *= n;

            if( result < temp ) 
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}