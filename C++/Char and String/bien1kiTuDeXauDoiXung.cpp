#include <bits/stdc++.h>
using namespace std;

int check( string s ){
    int count = 0;
    for( int i = 0; i < s.size() / 2; i++ ){
        if( (int)s[i] != (int)s[s.size() - 1 - i] )
            count++;
    }
    return count <= 1;
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