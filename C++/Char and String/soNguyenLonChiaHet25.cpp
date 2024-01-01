#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    if( s.size() == 1 )
        return 0;
    int check = ( (int)s[s.size() - 2] - 48 ) * 10 + ( (int)s[s.size() - 1] - 48 );
    if( check % 25 == 0 || check == 0 )
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