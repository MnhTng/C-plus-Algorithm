#include <bits/stdc++.h>
using namespace std;

void result( int a, int b ){
    string x = to_string( a );
    string y = to_string( b );
    string x1 = x, y1 = y;

    for( int i = 0; i < x.size(); i++ ){
        if( x[i] == '5' )
            x[i] = '3';
    }
    for( int i = 0; i < y.size(); i++ ){
        if( y[i] == '5' )
            y[i] = '3';
    }
    for( int i = 0; i < x1.size(); i++ ){
        if( x1[i] == '3' )
            x1[i] = '5';
    }
    for( int i = 0; i < y1.size(); i++ ){
        if( y1[i] == '3' )
            y1[i] = '5';
    }

    int m = stoi( x ), n = stoi( y );
    int m1 = stoi( x1 ), n1 = stoi( y1 );
    cout << m + n << " " << m1 + n1 << endl;
}

int main(){
    int t;
    cin >> t;;
    while( t-- ){
        int a, b;
        cin >> a >> b;
        result( a, b );
    }
    system("pause");
    return 0;
}