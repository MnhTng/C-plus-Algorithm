/*
    1, 2, 3, 5, 7! : giu nguyen
    4! = 4 * 3! = 2! * 2! * 3!
    6! = 6 * 5! = 3! * 5!
    8! = 8 * 7! = 2! * 2! * 2! * 7!
    9! = 9 * 8! = 3! * 3! * 2! * 7!
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, a;
        cin >> n >> a;
        string s = to_string( a );
        string merge;
        for( char x : s ){
            if( x == '4' )
                merge += "322";
            else if( x == '6' )
                merge += "53";
            else if( x == '8' )
                merge += "7222";
            else if( x == '9' )
                merge += "7322";
            else if( x != '0' && x != '1' )
                merge += x;
        }
        sort( merge.begin(), merge.end(), greater<int>() );
        for( char x : merge )
            cout << x;
        cout << endl;
    }
    system("pause");
    return 0;
}