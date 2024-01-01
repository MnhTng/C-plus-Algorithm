#include <bits/stdc++.h>
using namespace std;

int divideTo6( string s ){
    if( s[s.size() - 1] % 2 == 1 )
        return 0;
    int sum = 0;
    for( char x : s ){
        sum += (int)x - 48;
    }
    if( sum % 3 != 0 )
        return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        if( divideTo6( s ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}