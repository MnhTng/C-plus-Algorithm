#include <bits/stdc++.h>
using namespace std;

int cond1( string s ){
    for( int i = 0; i < s.size() - 1; i++ ){
        if( s[i] > s[i + 1] )
            return 0;
    }
    return 1;
}

int cond2( string s ){
    for( int i = 0; i < s.size() - 1; i++ ){
        if( s[i] != s[i + 1] )
            return 0;
    }
    return 1;
}

int cond3( string s ){
    if( s[0] == s[1] == s[2] && s[3] == s[4] )
        return 1;
    return 0;
}

int cond4( string s ){
    for( char x : s ){
        if( x != '6' && x != '8' )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        getline( cin, s );
        s = s.substr( s.size() - 6, s.size() );
        s = s.erase( s.size() - 3, 1 );
        if( cond1( s ) || cond2( s ) || cond3( s ) || cond4( s ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}