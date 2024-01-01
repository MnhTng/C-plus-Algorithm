#include <bits/stdc++.h>
using namespace std;

void erase( char *c ){
    for( int i = 0; i < strlen( c ) - 2; i++ ){
        if( c[i] == '0' && c[i+1] == '8' && c[i+2] == '4' )
            c[i] = c[i+1] = c[i+2] = 'a';
    }
    for( int i = 0; i < strlen( c ); i++ ){
        if( c[i] == 'a' )
            continue;
        cout << c[i];
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        char c[20];
        cin >> c;
        erase( c );
    }
    system("pause");
    return 0;
}