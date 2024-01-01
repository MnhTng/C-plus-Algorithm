/*
    De so nhi phan chia het cho 2^x thi can IT NHAT x chu so 0 cuoi cung cua day nhi phan  
*/

#include <bits/stdc++.h>
using namespace std;

int check( string s, int n ){
    for( int i = 0; i < n; i++ ){
        if( s[s.size() - 1 - i] != '0' )
            return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        int x;
        cin >> s >> x;
        if( check( s, x ) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}