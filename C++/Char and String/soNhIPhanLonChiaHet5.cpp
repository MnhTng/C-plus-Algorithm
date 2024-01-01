#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    int sum = 0, exponent2 = 1;
    for( char x : s ){
        int temp = (int)x - 48;
        if( temp == 0 )
            sum += 1;
        else
            sum += exponent2 % 5;
        exponent2 *= 2;
        exponent2 %= 5;
        sum %= 5;
    }
        if( sum % 5 == 0 )
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