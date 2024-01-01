#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    if( (int)s[s.size() - 1] - 48 != 0 )
        return 0;
    int sum = 0;
    for( char x : s ){
        sum += (int)x - 48;
    }
    if( sum % 3 == 0 )
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