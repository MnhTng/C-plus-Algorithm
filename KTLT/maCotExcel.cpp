/*
1 -> 26 : A -> Z                ( bang chu cai )
==> 'A' + 0 -> 'A' + 25 : A -> Z  ( bang ma ascii )
    column: 27 = 1 * 26 + 1 = AA 
            35 = 1 * 26 + 9 = AI 
            52 = 2 * 26 + 0 = AZ
            701 = 26 * 26 + 25 = ZY
*/
#include <bits/stdc++.h>
using namespace std;

string result( int n ){
    string s = "";
    while ( n > 0 ) {
        n--;
        s = (char)( 'A' + ( n % 26 ) ) + s;
        n /= 26;
    }
    return s;
}

int main(){
    freopen( "input.txt", "r", stdin );
    freopen( "output.txt", "w", stdout );
    int n;
    while ( cin >> n ){
        cout << result( n ) << endl;
    }
    system("pause");
    return 0;
}