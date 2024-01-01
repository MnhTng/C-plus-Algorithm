#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    if( (int)s[s.size() / 2] % 2 == 1 )
        return 0;
    string temp = s;
    reverse( temp.begin(), temp.end() );
    if( temp != s )
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