#include <bits/stdc++.h>
using namespace std;

int result( string s ){
    int kq = -1;

    for( int i = 0; i < s.size(); i++ ){
        int num0 = 0, num1 = 0;
        for( int j = i; j < s.size(); j++ ){
            if( s[j] == '0' )
                num0++;
            else
                num1++;
            
            kq = max( kq, num0 - num1 );
        }
    }

    return kq;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;

        cout << result( s ) << endl;
    }
    system("pause");
    return 0;
}