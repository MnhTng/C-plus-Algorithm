#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    int sum = 0;
    for( char x : s ){
        if( (int)x - 48 != 2 && (int)x - 48 != 3 && (int)x - 48 != 5 && (int)x - 48 != 7 )
            return 0;
        sum += (int)x - 48;
    }
    if( sum % 10 != 0 )
        return 0;
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