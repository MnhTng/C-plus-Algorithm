#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    if( s.size() == 1 ){
        if( ( (int)s[0] - 48 ) == 0 || ( (int)s[0] - 48 ) == 8 )
            return 1;
        return 0;
    }
    if( s.size() == 2 ){
        int check = ( (int)s[0] - 48 ) * 10 + ( (int)s[1] - 48 );
        if( check % 8 == 0 )
            return 1;
        return 0;
    }
    int check = ( (int)s[s.size() - 3] - 48 ) * 100 + ( (int)s[s.size() - 2] - 48 ) * 10 + ( (int)s[s.size() - 1] - 48 );
    if( check % 8 == 0 )
        return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        if( check( s ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}