#include <bits/stdc++.h>
using namespace std;

int uocMax[1000001];

int nto( int n ){
    for( int i = 2; i <= sqrt( n ); i++ ){
        if( n % i == 0 )
            return 0;
    }
    return 1;
}

void sang(){
    memset( uocMax, 0, sizeof( uocMax ) );

    for( int i = 2; i <= 500000; i++ ){
        if( nto( i ) ){
            for( int j = i; j <= 1000000; j += i )
                uocMax[j] = i;
        }
    }
}

int main(){
    int t;
    cin >> t;
    sang();
    while( t-- ){
        int n;
        cin >> n;
        long long sum = 0;

        for( int i = 2; i <= n; i++ )
            sum += uocMax[i];

        cout << sum << endl;
    }
    system("pause");
    return 0;
}