#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s1, s2;
        cin >> s1 >> s2;
        string kq1, kq2;

        for( char x : s1 ){
            if( x != ',' )
                kq1 += x;
        }
        for( char x : s2 ){
            if( x != ',' )
                kq2 += x;
        }

        cout << ( kq1.size() == kq2.size() && kq1 == kq2 ) << endl;
    }
    system("pause");
    return 0;
}