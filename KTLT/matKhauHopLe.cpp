#include <bits/stdc++.h>
using namespace std;

int upper( char x ){
    return 'A' <= x && x <= 'Z';
}

int lower( char x ){
    return 'a' <= x && x <= 'z';
}

int digit( char x ){
    return '0' <= x && x <= '9';
}

int special( char x ){
    return x == '!' || x == '@' || x == '#' || x == '$' || x == '%' || x == '^' || x == '&' || x == '*' || x == '(' || x == ')' || x == '-' || x == '+';
}

int check( string s ){
    if( s.size() < 8 )
        return 0;
    
    int u = 0, l = 0, d = 0, sp = 0, check = 1, same = 1;
    for( int i = 0; i < s.size(); i++ ){
        if( upper( s[i] ) )
            u = 1;
        if( lower( s[i] ) )
            l = 1;
        if( digit( s[i] ) )
            d = 1;
        if( special( s[i] ) )
            sp = 1;
        if( !upper( s[i] ) && !lower( s[i] ) && !digit( s[i] ) && !special( s[i] ) )
            check = 0;
        if( i < s.size() - 1 && s[i] == s[i + 1] )
            same = 0;
    }

    if( u && l && d && sp && check && same )
        return 1;
    return 0;
}

int main(){
    freopen( "password.in", "r", stdin );
    freopen( "res.out", "w", stdout );
    string s;
    while( cin >> s ){
        if( check( s ) )
            cout << "VALID" << endl;
        else
            cout << "INVALID" << endl;
    }
    system("pause");
    return 0;
}
