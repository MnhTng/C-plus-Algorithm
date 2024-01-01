#include <bits/stdc++.h>
using namespace std;

int divideTo4( string s ){
    if(  s.size() == 1 ){
        if( ( (int)s[0] - 48 ) % 4 == 0 )
            return 1;
        return 0;
    }
    else{
        int check = ( (int)s[s.size() - 2] - 48 ) * 10 + ( (int)s[s.size() - 1] - 48 );
        if( check % 4 == 0 )
            return 1;
        return 0;
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        if( divideTo4( s ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}