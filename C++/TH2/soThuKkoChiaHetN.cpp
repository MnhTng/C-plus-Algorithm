#include <bits/stdc++.h>
using namespace std;

long find( long n, long k ){
    if( k < n )
        return k;
    if( k % ( n - 1 ) == 0 )
        return n * ( k / ( n - 1 ) ) - 1;
    else    
        return n * ( k / ( n - 1 ) ) + k % ( n - 1 );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long n, k;
        cin >> n >> k;
        if( n >= 2 && k >= 1 ){
            cout << find( n, k ) << endl;
        }
    }
    system("pause");
    return 0;
}