#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    set<char> c;
    int count = 0;
    if( s[0] == '0' )
        return 0;
    for( char x : s ){
        if( c.count( x ) == 0 ){
            count++;
            c.insert( x );
        }
        if( 48 > (int)x || (int)x > 57 )
            return 0;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        if( check( s ) == 0 )
            cout << "INVALID" << endl;
        else if( check( s ) < 10 )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}