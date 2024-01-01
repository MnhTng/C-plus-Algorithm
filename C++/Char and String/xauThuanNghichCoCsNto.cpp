#include <bits/stdc++.h>
using namespace std;

int notPrime( int n ){
    return n != 2 && n != 3 && n != 5 && n != 7;
} 

int check( string s ){
    if( notPrime( (int)s[s.size() / 2] - 48 ) )
        return 0;
    for( int i = 0; i < s.size() / 2; i++ ){
        if( notPrime( (int)s[i] - 48 ) || (int)s[i] != (int)s[s.size() - 1 - i] )
            return 0;
    }
    return 1;
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