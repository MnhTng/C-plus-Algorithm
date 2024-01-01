#include <bits/stdc++.h>
using namespace std;

int upper( string s ){
    for( char x : s ){
        if( !isalpha( x ) )
            return 0;
        if( islower( x ) )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        getline( cin, s );
        stringstream ss( s );
        string detach;
        while( ss >> detach ){
            if( upper( detach ) )
                cout << detach << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}